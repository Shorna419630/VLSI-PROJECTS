library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_d_latch is
end tb_d_latch;

architecture Behavioral of tb_d_latch is

    component d_latch
        Port (
            D  : in  STD_LOGIC;
            EN : in  STD_LOGIC;
            Q  : out STD_LOGIC
        );
    end component;

    signal D  : STD_LOGIC := '0';
    signal EN : STD_LOGIC := '0';
    signal Q  : STD_LOGIC;

begin

    uut: d_latch
        port map (
            D  => D,
            EN => EN,
            Q  => Q
        );

    stimulus: process
    begin

        -- Latch disabled
        D  <= '0';
        EN <= '0';
        wait for 20 ns;

        -- Enable, D = 1
        D  <= '1';
        EN <= '1';
        wait for 20 ns;

        -- D changes while enabled
        D <= '0';
        wait for 20 ns;

        -- D changes again while enabled
        D <= '1';
        wait for 20 ns;

        -- Disable latch
        EN <= '0';
        wait for 20 ns;

        -- Change D while disabled
        D <= '0';
        wait for 20 ns;

        -- Q should still remain 1
        D <= '1';
        wait for 20 ns;

        -- Enable again
        D  <= '0';
        EN <= '1';
        wait for 20 ns;

        wait;
    end process;

end Behavioral;
