
library ieee;
use ieee.std_logic_1164.all;

-- 8-bit ALU, 3-bit operation select
--   000 ADD    A + B
--   001 SUB    A - B  (A + not B + 1)
--   010 AND
--   011 OR
--   100 XOR
--   101 NOT A
--   others -> 0
entity alu8 is
    port (
        a, b   : in  std_logic_vector(7 downto 0);
        op     : in  std_logic_vector(2 downto 0);
        result : out std_logic_vector(7 downto 0);
        carry  : out std_logic;
        zero   : out std_logic
    );
end entity;

architecture structural of alu8 is
    component adder8
        port (a, b : in std_logic_vector(7 downto 0); cin : in std_logic;
              sum : out std_logic_vector(7 downto 0); cout : out std_logic);
    end component;

    signal sub_sel   : std_logic;
    signal b_mux     : std_logic_vector(7 downto 0);
    signal add_out   : std_logic_vector(7 downto 0);
    signal add_cout  : std_logic;
    signal res       : std_logic_vector(7 downto 0);
begin
    -- SUB: invert B and set carry-in = 1 (A - B = A + ~B + 1)
    sub_sel <= '1' when op = "001" else '0';
    b_mux   <= not b when sub_sel = '1' else b;

    u_add : adder8
        port map (a => a, b => b_mux, cin => sub_sel,
                  sum => add_out, cout => add_cout);

    with op select
        res <= add_out  when "000",
               add_out  when "001",
               a and b  when "010",
               a or  b  when "011",
               a xor b  when "100",
               not a    when "101",
               (others => '0') when others;

    result <= res;
    carry  <= add_cout when (op = "000" or op = "001") else '0';
    zero   <= '1' when res = "00000000" else '0';
end architecture;

