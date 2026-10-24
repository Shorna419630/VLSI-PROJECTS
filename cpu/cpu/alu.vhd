
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity alu is
    port (
        A        : in  STD_LOGIC_VECTOR(7 downto 0);
        B        : in  STD_LOGIC_VECTOR(7 downto 0);
        ALU_SEL  : in  STD_LOGIC_VECTOR(2 downto 0);
        RESULT   : out STD_LOGIC_VECTOR(7 downto 0)
    );
end alu;

architecture Behavioral of alu is
begin
    process(A, B, ALU_SEL)
    begin
        case ALU_SEL is
            when "000" =>
                RESULT <= B;  -- LDI

            when "001" =>
                RESULT <= std_logic_vector(
                    unsigned(A) + unsigned(B)
                );            -- ADD

            when "010" =>
                RESULT <= std_logic_vector(
                    unsigned(A) - unsigned(B)
                );            -- SUB

            when "011" =>
                RESULT <= A and B;  -- AND

            when "100" =>
                RESULT <= A or B;   -- OR

            when others =>
                RESULT <= (others => '0');
        end case;
    end process;
end Behavioral;
