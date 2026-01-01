# Turing Complete

## Test of Bitwise Operations

```
0011 A
0101 B

0001 AND
0111 OR
0110 XOR

1110 NAND
1000 NOR
1001 XNOR
```

Terms are described in the order they occur in the game. In the game, red=off=0 and green=on=1

## NAND Gate

The NAND gate returns 0 if both bits are 1. Otherwise the result is 1. It is the same as the AND gate with the result inverted.

## NOT Gate

If the same bit is set to both inputs of a NAND gate, the result will always be the opposite of whatever the original input bit is. Off becomes on, on becomes off.

## AND Gate

The NAND gate returns 1 if both bits are 1. Otherwise the result is 0. It is the same as the NAND gate with the result inverted.

## OR Gate

The OR gate always returns 1 unless both bits are 0. Therefore, if both bits are inverted before being sent to a NAND gate, the result is the same as the OR gate.

## XOR Gate

Send both input bits to an OR gate and also a NAND gate. Then send the output of those two gates through an AND gate to get the result of an XOR gate. The XOR gate is always 1 if the bits are the different and 0 if they are the same.

## XOR Gate

Send both input bits to an NOR gate and also an AND gate. Then send the output of those two gates through an OR gate to get the result of an XNOR gate. The XNOR gate is always 0 if the bits are the different and 1 if they are the same.
