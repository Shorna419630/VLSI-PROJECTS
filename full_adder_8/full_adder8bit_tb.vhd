library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity full_adder8bit_tb is
end full_adder8bit_tb;

architecture Behavioral of full_adder8bit_tb is
    component full_adder8bit
        port (
            A    : in  STD_LOGIC_VECTOR(7 downto 0);
            B    : in  STD_LOGIC_VECTOR(7 downto 0);
            CIN  : in  STD_LOGIC;
            SUM  : out STD_LOGIC_VECTOR(7 downto 0);
            COUT : out STD_LOGIC
        );
    end component;
	 
	  signal A    : STD_LOGIC_VECTOR(7 downto 0);
    signal B    : STD_LOGIC_VECTOR(7 downto 0);
    signal CIN  : STD_LOGIC;
    signal SUM  : STD_LOGIC_VECTOR(7 downto 0);
    signal COUT : STD_LOGIC;
	 
 begin

    UUT: full_adder8bit
        port map (
            A => A,
            B => B,
            CIN => CIN,
            SUM => SUM,
            COUT => COUT
        );

    process
	 begin

        A <= "00000000";
        B <= "00000000";
        CIN <= '0';
        wait for 20 ns;

        A <= "00000001";
        B <= "00000001";
        CIN <= '0';
        wait for 20 ns;
         A <= "00000101";
        B <= "00000011";
        CIN <= '0';
        wait for 20 ns;

        A <= "00001111";
        B <= "00000001";
        CIN <= '0';
        wait for 20 ns;
        A <= "11111111";
        B <= "00000001";
        CIN <= '0';
        wait for 20 ns;

        A <= "10101010";
        B <= "01010101";
        CIN <= '1';
        wait for 20 ns;
    wait;

    end process;

end Behavioral;		  
