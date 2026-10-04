library ieee;
use ieee.std_logic_1164.all;

-- 8-bit ripple-carry adder (full_adder x 8)
entity adder8 is
    port (
        a, b : in  std_logic_vector(7 downto 0);
        cin  : in  std_logic;
        sum  : out std_logic_vector(7 downto 0);
        cout : out std_logic
    );
end entity;

architecture structural of adder8 is
    component full_adder
        port (a, b, cin : in std_logic; sum, cout : out std_logic);
    end component;
    signal c : std_logic_vector(8 downto 0);
begin
    c(0) <= cin;
    gen : for i in 0 to 7 generate
        fa : full_adder
            port map (a => a(i), b => b(i), cin => c(i),
                      sum => sum(i), cout => c(i+1));
    end generate;
    cout <= c(8);
end architecture;
