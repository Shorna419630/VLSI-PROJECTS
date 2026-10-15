library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Adder_4bit is
    Port (
        A, B : in STD_LOGIC_VECTOR(3 downto 0);
        Sum : out STD_LOGIC_VECTOR(3 downto 0);
        Cout : out STD_LOGIC
    );
end Adder_4bit;

architecture Structural of Adder_4bit is
    component Full_Adder
        Port ( A, B, Cin : in STD_LOGIC; Sum, Cout : out STD_LOGIC );
    end component;
    signal C : STD_LOGIC_VECTOR(4 downto 0);
begin
    C(0) <= '0';
    FA0: Full_Adder port map (A => A(0), B => B(0), Cin => C(0), Sum => Sum(0), Cout => C(1));
    FA1: Full_Adder port map (A => A(1), B => B(1), Cin => C(1), Sum => Sum(1), Cout => C(2));
    FA2: Full_Adder port map (A => A(2), B => B(2), Cin => C(2), Sum => Sum(2), Cout => C(3));
    FA3: Full_Adder port map (A => A(3), B => B(3), Cin => C(3), Sum => Sum(3), Cout => C(4));
    Cout <= C(4);
end Structural;
