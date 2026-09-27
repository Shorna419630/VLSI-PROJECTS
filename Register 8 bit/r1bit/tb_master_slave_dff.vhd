library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_master_slave_dff is
end tb_master_slave_dff;

architecture Behavioral of tb_master_slave_dff is

    component master_slave_dff
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

    uut: master_slave_dff
        port map (
            D   => D,
            CLK => CLK,
            Q   => Q
        );

    -- Clock generation
    clock_process: process
    begin
        CLK <= '0';
        wait for 10 ns;

        CLK <= '1';
        wait for 10 ns;
    end process;


    -- Input generation
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