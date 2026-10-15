library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ALU_4bit_TB is
end ALU_4bit_TB;

architecture Behavioral of ALU_4bit_TB is
    component ALU_4bit
        Port (
            A    : in STD_LOGIC_VECTOR(3 downto 0);
            B    : in STD_LOGIC_VECTOR(3 downto 0);
            SEL  : in STD_LOGIC_VECTOR(1 downto 0);
            Y    : out STD_LOGIC_VECTOR(3 downto 0);
            COUT : out STD_LOGIC
        );
    end component;
    signal A, B, Y : STD_LOGIC_VECTOR(3 downto 0);
    signal SEL : STD_LOGIC_VECTOR(1 downto 0);
    signal COUT : STD_LOGIC;
begin
    DUT: ALU_4bit port map (A => A, B => B, SEL => SEL, Y => Y, COUT => COUT);
    process
    begin
        SEL <= "00"; A <= "1100"; B <= "1010"; wait for 10 ns;
        assert (Y = "1000" and COUT = '0') report "Step 1 Failed" severity error;
        SEL <= "00"; A <= "1111"; B <= "0101"; wait for 10 ns;
        assert (Y = "0101" and COUT = '0') report "Step 2 Failed" severity error;
        SEL <= "01"; A <= "1100"; B <= "0011"; wait for 10 ns;
        assert (Y = "1111" and COUT = '0') report "Step 3 Failed" severity error;
        SEL <= "01"; A <= "1001"; B <= "0100"; wait for 10 ns;
        assert (Y = "1101" and COUT = '0') report "Step 4 Failed" severity error;
        SEL <= "10"; A <= "0011"; B <= "0101"; wait for 10 ns;
        assert (Y = "1000" and COUT = '0') report "Step 5 Failed" severity error;
        SEL <= "10"; A <= "1111"; B <= "0001"; wait for 10 ns;
        assert (Y = "0000" and COUT = '1') report "Step 6 Failed" severity error;
        SEL <= "10"; A <= "1010"; B <= "0101"; wait for 10 ns;
        assert (Y = "1111" and COUT = '0') report "Step 7 Failed" severity error;
        SEL <= "11"; A <= "1010"; B <= "0101"; wait for 10 ns;
        assert (Y = "0000" and COUT = '0') report "Step 8 Failed" severity error;
        report "All 8 test cases passed successfully." severity note;
        wait;
    end process;
end Behavioral;
