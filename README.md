# Holberton School _printf in C

A small, educational reimplementation of the C standard library function `printf`.

Table of Contents
-----------------
- [Description](#description)
- [Features](#features)
- [Usage](#usage)
- [Examples](#examples)
- [Bugs & Reporting](#bugs--reporting)
- [Styling (Betty)](#styling-betty)
- [Authors](#authors)

Description
-----------
A simple C implementation of `printf` (called `_printf`) can be found in this repository. It is designed to teach you how to understand formatting, variadic functions, and buffer handling, as well as how to write modular C code that emulates the behaviour of the standard `printf` family for a subset of format specifiers.

The project's main goals are robustness, correctness for common specifiers, and readable, maintainable code written in the Betty coding style.

Features
--------
- Common format specifiers (such as `%c`, `%s`, `%d`, `%i`, and `%%`) are supported.
- Embedded or constrained environments can benefit from this minimal, dependency-free C implementation.
- Extensive illustrations of expected behaviour.
- Code style and documentation comments that adhere to Betty.

Usage
--------
Build (using `gcc` as an example):

```bash gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o _printf_demo```

Launch the demo binary:

```bash ./_printf_demo```

Additionally, you can gather particular files for your own programs' testing.  When necessary, include or link the `_printf` source files.

Examples
--------
Example source (using `_printf` in a manner akin to `printf`):

```c int main (void)
_printf ("Hello, %s!\\n", "world"); 
_printf ("Percent sign: %%\\n"); 
_printf ("Number: %d, Char: %c\\n", 42, "A"); 
return 0;
```

Expected output:
```
Hello, world!
Percent sign: %
Number: 42, Char: A
```

Manual Page
-----------
A dedicated manual page for `_printf` is provided in this repository.

- **File:** `man_3_printf.man`
- **Format:** Standard UNIX manual (groff)

### Usage
```bash
man ./man_3_printf.man


Bugs & Reporting
----------------
If you discover a bug or unusual behaviour, kindly:

- Create a repository issue outlining the issue and how to replicate it.
- Provide the commands you executed along with a sample of minimal code.
- Include the results you saw and the results you anticipated, if at all possible.

Styling (Betty)
---------------
The Betty coding style is used in this project. If your environment has the Betty linter tools (`betty-style.pl` and `betty-doc.pl`), use them to verify and enforce style locally.

Authors
-------
- Mario Colomas
- Victor Monnot

