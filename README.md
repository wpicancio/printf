# FT_PRINTF

This repository contains the implementation of a custom `printf` function, called `ft_printf`, developed as part of the **42 School** curriculum. The goal of this project is to recreate the behavior of the standard `printf` function in C, handling formatted output with various specifiers.

## 📁 Project Structure

- `ft_printf.c` – Main implementation of the `ft_printf` function.  
- `ft_printf_utils.c` – Utility functions used for formatting and output.  
- `ft_printf.h` – Header file with function prototypes and necessary includes.  
- `*.o` – Object files generated during compilation.  
- `a.out` (or your compiled binary) – Result of compiling with `ft_printf`.

## ✅ Supported Format Specifiers

The `ft_printf` function supports the following format specifiers:

- `%c` – Character  
- `%s` – String  
- `%p` – Pointer address  
- `%d` or `%i` – Signed decimal integer  
- `%u` – Unsigned decimal integer  
- `%x` – Lowercase hexadecimal  
- `%X` – Uppercase hexadecimal  
- `%%` – Percent sign

## ⚙️ Compilation

To compile the library and use it in your own project, run:  
`make`

This will generate object files and allow you to link `ft_printf.o` to your project.

To clean object files:  
`make clean`

To remove all object files and binaries:  
`make fclean`

To clean and recompile:  
`make re`

## 🧪 Usage Example

To use `ft_printf` in your project, include the header file:  
`#include "ft_printf.h"`

Then compile your code with the source files:  
`gcc ft_printf.c ft_printf_utils.c main.c -o my_printf`

You can now call `ft_printf` just like the standard `printf`:  
`ft_printf("Hello %s! The number is %d\n", "world", 42);`

## 📌 Notes

- All output is written to the standard output (`stdout`).  
- The return value of `ft_printf` matches the number of characters printed, similar to the standard `printf`.  
- The function was implemented using only allowed C functions as specified in the project guidelines.

## 👤 Author

- [@wpicancio](https://github.com/wpicancio)

---

> Project developed as part of the 42 School curriculum.
