
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity control_unit is
    port (
        OPCODE  : in  STD_LOGIC_VECTOR(3 downto 0);
        ALU_SEL : out STD_LOGIC_VECTOR(2 downto 0);
        LOAD_ACC : out STD_LOGIC
    );
end control_unit;

architecture Behavioral of control_unit is
begin
    process(OPCODE)
    begin
        ALU_SEL  <= "000";
        LOAD_ACC <= '0';

        case OPCODE is
            when "0001" =>  -- LDI
                ALU_SEL  <= "000";
                LOAD_ACC <= '1';

            when "0010" =>  -- ADD
                ALU_SEL  <= "001";
                LOAD_ACC <= '1';

            when "0011" =>  -- SUB
                ALU_SEL  <= "010";
                LOAD_ACC <= '1';

            when "0100" =>  -- AND
                ALU_SEL  <= "011";
                LOAD_ACC <= '1';

            when "0101" =>  -- OR
                ALU_SEL  <= "100";
                LOAD_ACC <= '1';

            when others =>
                ALU_SEL  <= "000";
                LOAD_ACC <= '0';
        end case;
    end process;
end Behavioral;

