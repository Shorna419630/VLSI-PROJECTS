library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity d_latch is
    Port (
        D  : in  STD_LOGIC;
        EN : in  STD_LOGIC;
        Q  : out STD_LOGIC
    );
end d_latch;

architecture Behavioral of d_latch is
    signal q_temp : STD_LOGIC := '0';
begin

    process(D, EN)
    begin
        if EN = '1' then
            q_temp <= D;
        end if;
    end process;

    Q <= q_temp;

end Behavioral;
