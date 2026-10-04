library ieee;
use ieee.std_logic_1164.all;

-- ALU + result register (register -> ALU wired together)
entity alu8_top is
    port (
        clk, rst : in  std_logic;
        en       : in  std_logic;
        a, b     : in  std_logic_vector(7 downto 0);
        op       : in  std_logic_vector(2 downto 0);
        q        : out std_logic_vector(7 downto 0);
        carry    : out std_logic;
        zero     : out std_logic
    );
end entity;

architecture structural of alu8_top is
    component alu8
        port (a, b : in std_logic_vector(7 downto 0);
              op : in std_logic_vector(2 downto 0);
              result : out std_logic_vector(7 downto 0);
              carry, zero : out std_logic);
    end component;
    component reg8
        port (clk, rst, en : in std_logic;
              d : in std_logic_vector(7 downto 0);
              q : out std_logic_vector(7 downto 0));
    end component;
    signal alu_res : std_logic_vector(7 downto 0);
begin
    u_alu : alu8 port map (a => a, b => b, op => op,
                           result => alu_res, carry => carry, zero => zero);
    u_reg : reg8 port map (clk => clk, rst => rst, en => en,
                           d => alu_res, q => q);
end architecture;

