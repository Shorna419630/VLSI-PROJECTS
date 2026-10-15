# 4-Bit Arithmetic Logic Unit (ALU)

A structural VHDL implementation of a 4-bit ALU using Xilinx ISE.

## Operations

| SEL | Operation | Output |
|---|---|---|
| `00` | Bitwise AND | `A AND B` |
| `01` | Bitwise OR | `A OR B` |
| `10` | 4-bit addition | `A + B`, with carry-out |
| `11` | Reserved/default | `0000` |

## Source files

- `ALU4bit.vhd` — top-level ALU module
- `AND.vhd` — bitwise AND unit (`AND_Unit`)
- `OR.vhd` — bitwise OR unit (`OR_Unit`)
- `MUX.vhd` — 4-to-1 multiplexer (`MUX_4to1`)
- `fulladder1bit.vhd` — 1-bit full adder (`Full_Adder`)
- `adder4bit.vhd` — structural 4-bit ripple-carry adder (`Adder_4bit`)
- `ALU_4bit_TB.vhd` — testbench with 8 test cases

## Run in Xilinx ISE

1. Create/open an ISE project and add the six design `.vhd` files as **Design Sources**.
2. Add `ALU_4bit_TB.vhd` as a **Simulation Source**.
3. Set `ALU_4bit` as the design top module and `ALU_4bit_TB` as the simulation top.
4. Run **Behavioral Simulation** and inspect `A`, `B`, `SEL`, `Y`, and `COUT`.

Note: generated ISE build files and simulator executables are intentionally not included; regenerate them inside ISE as needed.
