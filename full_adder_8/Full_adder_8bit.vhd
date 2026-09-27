library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity full_adder8bit is
    Port (
        A    : in  STD_LOGIC_VECTOR(7 downto 0);
        B    : in  STD_LOGIC_VECTOR(7 downto 0);
        CIN  : in  STD_LOGIC;
        SUM  : out STD_LOGIC_VECTOR(7 downto 0);
        COUT : out STD_LOGIC
    );
end full_adder8bit;
architecture Structural of full_adder8bit is

    component adder4bit
        Port (
            A    : in  STD_LOGIC_VECTOR(3 downto 0);
            B    : in  STD_LOGIC_VECTOR(3 downto 0);
            CIN  : in  STD_LOGIC;
            SUM  : out STD_LOGIC_VECTOR(3 downto 0);
            COUT : out STD_LOGIC
        );
    end component;
	  signal carry_mid : STD_LOGIC;

begin

    -- LOW NIBBLE
    LOW_NIBBLE: adder4bit
        port map (
            A    => A(3 downto 0),
            B    => B(3 downto 0),
            CIN  => CIN,
            SUM  => SUM(3 downto 0),
            COUT => carry_mid
        );
		-- HIGH NIBBLE
    HIGH_NIBBLE: adder4bit
        port map (
            A    => A(7 downto 4),
            B    => B(7 downto 4),
            CIN  => carry_mid,
            SUM  => SUM(7 downto 4),
            COUT => COUT
        );

end Structural;  