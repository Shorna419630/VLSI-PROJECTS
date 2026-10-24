library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ALU_4bit is
    Port (
        A    : in STD_LOGIC_VECTOR(3 downto 0);
        B    : in STD_LOGIC_VECTOR(3 downto 0);
        SEL  : in STD_LOGIC_VECTOR(1 downto 0);
        Y    : out STD_LOGIC_VECTOR(3 downto 0);
        COUT : out STD_LOGIC
    );
end ALU_4bit;

architecture Structural of ALU_4bit is

    component AND_Unit
        Port (
            A : in STD_LOGIC_VECTOR(3 downto 0);
            B : in STD_LOGIC_VECTOR(3 downto 0);
            Y : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    component OR_Unit
        Port (
            A : in STD_LOGIC_VECTOR(3 downto 0);
            B : in STD_LOGIC_VECTOR(3 downto 0);
            Y : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    component Adder_4bit
        Port (
            A    : in STD_LOGIC_VECTOR(3 downto 0);
            B    : in STD_LOGIC_VECTOR(3 downto 0);
            Sum  : out STD_LOGIC_VECTOR(3 downto 0);
            Cout : out STD_LOGIC
        );
    end component;

    component MUX_4to1
        Port (
            D0  : in STD_LOGIC_VECTOR(3 downto 0);
            D1  : in STD_LOGIC_VECTOR(3 downto 0);
            D2  : in STD_LOGIC_VECTOR(3 downto 0);
            D3  : in STD_LOGIC_VECTOR(3 downto 0);
            SEL : in STD_LOGIC_VECTOR(1 downto 0);
            Y   : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    signal AND_Result : STD_LOGIC_VECTOR(3 downto 0);
    signal OR_Result  : STD_LOGIC_VECTOR(3 downto 0);
    signal ADD_Result : STD_LOGIC_VECTOR(3 downto 0);
    signal ADD_Cout   : STD_LOGIC;

    signal MUX_Result : STD_LOGIC_VECTOR(3 downto 0);

begin

    AND_Module: AND_Unit
        port map (
            A => A,
            B => B,
            Y => AND_Result
        );

    OR_Module: OR_Unit
        port map (
            A => A,
            B => B,
            Y => OR_Result
        );

    ADD_Module: Adder_4bit
        port map (
            A    => A,
            B    => B,
            Sum  => ADD_Result,
            Cout => ADD_Cout
        );

    MUX_Module: MUX_4to1
        port map (
            D0  => AND_Result,
            D1  => OR_Result,
            D2  => ADD_Result,
            D3  => "0000",
            SEL => SEL,
            Y   => MUX_Result
        );

    Y <= MUX_Result;

    COUT <= ADD_Cout when SEL = "10" else '0';

end Structural;
