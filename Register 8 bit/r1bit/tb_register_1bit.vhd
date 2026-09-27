library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_register_1bit is
end tb_register_1bit;

architecture Behavioral of tb_register_1bit is

    component register_1bit
        Port (
            D   : in  STD_LOGIC;
            CLK : in  STD_LOGIC;
            Q   : out STD_LOGIC
        );
    end component;

    signal D   : STD_LOGIC := '0';
    signal CLK : STD_LOGIC := '0';
    signal Q   : STD_LOGIC;

begin

    uut: register_1bit
        port map (
            D   => D,
            CLK => CLK,
            Q   => Q
        );

    -- Clock
    clock_process: process
    begin
        CLK <= '0';
        wait for 10 ns;

        CLK <= '1';
        wait for 10 ns;
    end process;


    -- Data
    stimulus: process
    begin

        D <= '0';
        wait for 5 ns;

        D <= '1';
        wait for 20 ns;

        D <= '0';
        wait for 20 ns;

        D <= '1';
        wait for 20 ns;

        D <= '0';
        wait for 20 ns;

        D <= '1';
        wait for 20 ns;

        wait;
    end process;

end Behavioral;