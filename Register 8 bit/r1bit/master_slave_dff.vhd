library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity master_slave_dff is
    Port (
        D   : in  STD_LOGIC;
        CLK : in  STD_LOGIC;
        Q   : out STD_LOGIC
    );
end master_slave_dff;

architecture Structural of master_slave_dff is

    component d_latch
        Port (
            D  : in  STD_LOGIC;
            EN : in  STD_LOGIC;
            Q  : out STD_LOGIC
        );
    end component;

    signal master_q : STD_LOGIC;
    signal not_clk  : STD_LOGIC;

begin

    not_clk <= not CLK;

    Master : d_latch
        port map (
            D  => D,
            EN => not_clk,
            Q  => master_q
        );

    Slave : d_latch
        port map (
            D  => master_q,
            EN => CLK,
            Q  => Q
        );

end Structural;
