library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_register_8bit is
end tb_register_8bit;

architecture Behavioral of tb_register_8bit is

    component register_8bit
        Port (
            D   : in  STD_LOGIC_VECTOR(7 downto 0);
            CLK : in  STD_LOGIC;
            Q   : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    signal D   : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal CLK : STD_LOGIC := '0';
    signal Q   : STD_LOGIC_VECTOR(7 downto 0);

begin

    uut: register_8bit
        port map (
            D   => D,
            CLK => CLK,
            Q   => Q
        );

    clock_process : process
    begin
        CLK <= '0';
        wait for 10 ns;

        CLK <= '1';
        wait for 10 ns;
    end process;


    stimulus_process : process
    begin

        D <= "00000000";
        wait for 5 ns;

        D <= "10101010";
        wait for 20 ns;

        D <= "11110000";
        wait for 20 ns;

        D <= "00001111";
        wait for 20 ns;

        D <= "11001100";
        wait for 20 ns;

        D <= "00110011";
        wait for 20 ns;

        wait;

    end process;

end Behavioral;
  

        
