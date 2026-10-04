library ieee;
use ieee.std_logic_1164.all;

-- 8-bit register: synchronous load enable, async reset
entity reg8 is
    port (
        clk : in  std_logic;
        rst : in  std_logic;                      -- active high
        en  : in  std_logic;                      -- load enable
        d   : in  std_logic_vector(7 downto 0);
        q   : out std_logic_vector(7 downto 0)
    );
end entity;

architecture rtl of reg8 is
begin
    process (clk, rst)
    begin
        if rst = '1' then
            q <= (others => '0');
        elsif rising_edge(clk) then
            if en = '1' then
                q <= d;
            end if;
        end if;
    end process;
end architecture;







