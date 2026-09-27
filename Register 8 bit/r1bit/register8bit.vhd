library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_8bit is
    Port (
        D   : in  STD_LOGIC_VECTOR(7 downto 0);
        CLK : in  STD_LOGIC;
        Q   : out STD_LOGIC_VECTOR(7 downto 0)
    );
end register_8bit;

architecture Behavioral of register_8bit is
    signal temp_q : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
begin

    process(CLK)
    begin
        if rising_edge(CLK) then
            temp_q <= D;
        end if;
    end process;

    Q <= temp_q;

end Behavioral;