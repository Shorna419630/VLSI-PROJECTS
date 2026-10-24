
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity mini_cpu is
    port (
        CLK      : in  STD_LOGIC;
        RESET    : in  STD_LOGIC;
        PC_OUT   : out STD_LOGIC_VECTOR(3 downto 0);
        ACC_OUT  : out STD_LOGIC_VECTOR(7 downto 0);
        ZERO_OUT : out STD_LOGIC
    );
end mini_cpu;

architecture Structural of mini_cpu is

    signal pc_current : STD_LOGIC_VECTOR(3 downto 0);
    signal pc_next    : STD_LOGIC_VECTOR(3 downto 0);

    signal instruction : STD_LOGIC_VECTOR(11 downto 0);
    signal opcode      : STD_LOGIC_VECTOR(3 downto 0);
    signal immediate   : STD_LOGIC_VECTOR(7 downto 0);

    signal alu_sel     : STD_LOGIC_VECTOR(2 downto 0);
    signal load_acc    : STD_LOGIC;
    signal alu_result  : STD_LOGIC_VECTOR(7 downto 0);
    signal accumulator : STD_LOGIC_VECTOR(7 downto 0);
    signal zero_flag   : STD_LOGIC;

begin

    -- Program Counter
    PC_UNIT: entity work.program_counter
        port map (
            CLK     => CLK,
            RESET   => RESET,
            NEXT_PC => pc_next,
            PC_OUT  => pc_current
        );

    -- Program ROM
    ROM_UNIT: entity work.program_rom
        port map (
            ADDR  => pc_current,
            INSTR => instruction
        );

    -- Instruction fields
    opcode    <= instruction(11 downto 8);
    immediate <= instruction(7 downto 0);

    -- Control Unit
    CONTROL_UNIT: entity work.control_unit
        port map (
            OPCODE   => opcode,
            ALU_SEL  => alu_sel,
            LOAD_ACC => load_acc
        );

    -- Arithmetic Logic Unit
    ALU_UNIT: entity work.alu
        port map (
            A       => accumulator,
            B       => immediate,
            ALU_SEL => alu_sel,
            RESULT  => alu_result
        );

    -- Accumulator and Zero Flag
    REGISTER_UNIT: entity work.acc_z_register
        port map (
            CLK      => CLK,
            RESET    => RESET,
            LOAD_ACC => load_acc,
            DATA_IN  => alu_result,
            ACC_OUT  => accumulator,
            ZERO_OUT => zero_flag
        );

    -- Increment PC
    pc_next <= std_logic_vector(
        unsigned(pc_current) + 1
    );

    -- External outputs
    PC_OUT   <= pc_current;
    ACC_OUT  <= accumulator;
    ZERO_OUT <= zero_flag;

end Structural;



