library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity tb_alu8 is end entity;

architecture sim of tb_alu8 is
    signal a, b   : std_logic_vector(7 downto 0) := (others => '0');
    signal op     : std_logic_vector(2 downto 0) := "000";
    signal result : std_logic_vector(7 downto 0);
    signal carry, zero : std_logic;
begin
    dut : entity work.alu8
        port map (a => a, b => b, op => op, result => result, carry => carry, zero => zero);

    process
    begin
        a <= x"0F"; b <= x"01";
        op <= "000"; wait for 10 ns; assert result = x"10" report "ADD fail" severity error;
        op <= "001"; wait for 10 ns; assert result = x"0E" report "SUB fail" severity error;
        op <= "010"; wait for 10 ns; assert result = x"01" report "AND fail" severity error;
        op <= "011"; wait for 10 ns; assert result = x"0F" report "OR fail"  severity error;
        op <= "100"; wait for 10 ns; assert result = x"0E" report "XOR fail" severity error;
        op <= "101"; wait for 10 ns; assert result = x"F0" report "NOT fail" severity error;
        a <= x"FF"; b <= x"01"; op <= "000"; wait for 10 ns;
        assert result = x"00" and carry = '1' and zero = '1' report "carry/zero fail" severity error;
        report "Simulation finished";
        wait;
    end process;
end architecture;

