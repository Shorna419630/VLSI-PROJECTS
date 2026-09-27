library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity sr_latch is
    Port (
        S : in  STD_LOGIC;
        R : in  STD_LOGIC;
        Q : out STD_LOGIC;
        Qbar : out STD_LOGIC
    );
end sr_latch;

architecture Behavioral of sr_latch is
    signal q_temp : STD_LOGIC := '0';
begin

    process(S, R)
    begin
        if S = '1' and R = '0' then
            q_temp <= '1';
        elsif S = '0' and R = '1' then
            q_temp <= '0';
        elsif S = '0' and R = '0' then
            q_temp <= q_temp;
        end if;
    end process;

    Q <= q_temp;
    Qbar <= not q_temp;

end Behavioral;