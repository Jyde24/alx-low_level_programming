# 0x14. C - Bit manipulation
---
##Concept Literature
Bit manipulation refers to the manipulation and processing of individual bits or groups of bits within binary representations of data. It involves using bitwise operators to perform various operations such as setting, clearing, toggling, or extracting specific bits, as well as performing logical operations on individual bits.
Bit manipulation is used in situations in low-level programming where memory efficiency and optimization are critical. It allows programmers to perform operations at a bit-level, enabling them to manipulate individual flags, extract specific fields from binary data, or optimize storage and performance in various ways.

## Bitwise operators in C

* Bitwise AND (&): Performs a bitwise AND operation between two operands, resulting in a new value where each bit is set if and only if both corresponding bits in the operands are set.

* Bitwise OR (|): Performs a bitwise OR operation between two operands, resulting in a new value where each bit is set if either of the corresponding bits in the operands is set.

* Bitwise XOR (^): Performs a bitwise exclusive OR operation between two operands, resulting in a new value where each bit is set if and only if exactly one of the corresponding bits in the operands is set.

* Bitwise NOT (~): Performs a bitwise complement operation on a single operand, resulting in a new value where each bit is flipped (0s become 1s and 1s become 0s).

* Left shift (<<): Shifts the bits of the left operand to the left by a specified number of positions, effectively multiplying the value by a power of two.

* Right shift (>>): Shifts the bits of the left operand to the right by a specified number of positions, effectively dividing the value by a power of two.

---
# Bit Manipulation Project

## Learning Objectives

* Look for the right source of information without too much help
* How to manipulate bits and use bitwise operators

---

### [0. 0](./0-binary_to_uint.c)
* A function that converts a binary number to an unsigned int.


### [1. 1](./1-print_binary.c)
* A function that prints the binary representation of a number.


### [2. 10](./2-get_bit.c)
* A function that returns the value of a bit at a given index.


### [3. 11](./3-set_bit.c)
* A function that sets the value of a bit to 1 at a given index.


### [4. 100](./4-clear_bit.c)
* A function that sets the value of a bit to 0 at a given index.


### [5. 101](./5-flip_bits.c)
* A function that returns the number of bits you would need to flip to get from one number to another.


### [6. Endianness](./100-get_endianness.c)
* A function that checks the endianness.


### [7. Crackme3](./101-password)
* The password to the Crackme3 program.


---

## Author
* **Chukwunonso Jide** - [Jyde24](https://github.com/Jyde24)
