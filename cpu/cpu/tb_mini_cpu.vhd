
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_mini_cpu is
end tb_mini_cpu;

architecture Simulation of tb_mini_cpu is

    signal CLK      : STD_LOGIC := '0';
    signal RESET    : STD_LOGIC := '1';
    signal PC_OUT   : STD_LOGIC_VECTOR(3 downto 0);
    signal ACC_OUT  : STD_LOGIC_VECTOR(7 downto 0);
    signal ZERO_OUT : STD_LOGIC;

begin

    DUT: entity work.mini_cpu
        port map (
            CLK      => CLK,
            RESET    => RESET,
            PC_OUT   => PC_OUT,
            ACC_OUT  => ACC_OUT,
            ZERO_OUT => ZERO_OUT
        );

    -- 10 ns clock period
    CLK <= not CLK after 5 ns;

    process
    begin
        -- Apply reset
        RESET <= '1';
        wait until rising_edge(CLK);
        wait for 1 ns;

        assert ACC_OUT = x"00" and ZERO_OUT = '1'
            report "Reset test failed"
            severity error;

        RESET <= '0';

        -- Instruction 0: LDI 3C
        wait until rising_edge(CLK);
        wait for 1 ns;
        assert ACC_OUT = x"3C" and ZERO_OUT = '0'
            report "LDI test failed"
            severity error;
        report "LDI passed" severity note;

        -- Instruction 1: ADD 0F
        wait until rising_edge(CLK);
        wait for 1 ns;
        assert ACC_OUT = x"4B" and ZERO_OUT = '0'
            report "ADD test failed"
            severity error;
        report "ADD passed" severity note;

        -- Instruction 2: SUB 0B
        wait until rising_edge(CLK);
        wait for 1 ns;
        assert ACC_OUT = x"40" and ZERO_OUT = '0'
            report "SUB 0B test failed"
            severity error;
        report "SUB 0B passed" severity note;

        -- Instruction 3: AND F0
        wait until rising_edge(CLK);
        wait for 1 ns;
        assert ACC_OUT = x"40" and ZERO_OUT = '0'
            report "AND test failed"
            severity error;
        report "AND passed" severity note;

        -- Instruction 4: OR 0A
        wait until rising_edge(CLK);
        wait for 1 ns;
        assert ACC_OUT = x"4A" and ZERO_OUT = '0'
            report "OR test failed"
            severity error;
        report "OR passed" severity note;

        -- Instruction 5: SUB 4A
        wait until rising_edge(CLK);
        wait for 1 ns;
        assert ACC_OUT = x"00" and ZERO_OUT = '1'
            report "Zero flag test failed"
            severity error;
        report "Zero flag test passed" severity note;

        -- Instruction 6: SUB 01
        wait until rising_edge(CLK);
        wait for 1 ns;
        assert ACC_OUT = x"FF" and ZERO_OUT = '0'
            report "8-bit subtraction test failed"
            severity error;
        report "8-bit subtraction test passed" severity note;

        report "All CPU tests completed successfully."
            severity note;

        wait;
    end process;

end Simulation;

