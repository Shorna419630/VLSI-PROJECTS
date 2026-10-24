
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity acc_z_register is
    port (
        CLK       : in  STD_LOGIC;
        RESET     : in  STD_LOGIC;
        LOAD_ACC  : in  STD_LOGIC;
        DATA_IN   : in  STD_LOGIC_VECTOR(7 downto 0);
        ACC_OUT   : out STD_LOGIC_VECTOR(7 downto 0);
        ZERO_OUT  : out STD_LOGIC
    );
end acc_z_register;

architecture Behavioral of acc_z_register is
    signal acc_reg  : STD_LOGIC_VECTOR(7 downto 0)
                      := (others => '0');
    signal zero_reg : STD_LOGIC := '1';
begin
    process(CLK)
    begin
        if rising_edge(CLK) then
            if RESET = '1' then
                acc_reg  <= (others => '0');
                zero_reg <= '1';

            elsif LOAD_ACC = '1' then
                acc_reg <= DATA_IN;

                if DATA_IN = x"00" then
                    zero_reg <= '1';
                else
                    zero_reg <= '0';
                end if;
            end if;
        end if;
    end process;

    ACC_OUT  <= acc_reg;
    ZERO_OUT <= zero_reg;
end Behavioral;


