# 42_printf

## Purpose
> The purpose of this project is to learn about *variadic functions* by recoding `libc`'s [`printf`].

## Mandatory Part

- `%c` print a character
- `%s` print a string
- `%d` and %i print a decimal number
- `%u` print an unsigned decimal number
- `%x` and %X print a hexadecimal number
- `%p` print a pointer address
- `%%` print a percent symbol

## Allowed Functions

- [`malloc`](https://man7.org/linux/man-pages/man3/free.3.html)
- [`free`](https://man7.org/linux/man-pages/man3/free.3.html)
- [`write`](https://man7.org/linux/man-pages/man2/write.2.html)
- [`va_start, va_arg, va_end & va_copy`](https://man7.org/linux/man-pages/man3/stdarg.3.html)

## Instructions
Run the command `make` to compile the `libftprintf.a` library.
After the successful compilation, you can use the libftprintf.a library in your projects.

To clean the object files generated during compilation, run the command `make clean`.
To remove the libftprintf.a library, run the command `make fclean`.
To recompile the entire project, run the command `make re`.

## Grade: 100 / 100

## Used Tests
- Francinette: https://github.com/xicodomingues/francinette
- printfTester: https://github.com/Tripouille/printfTester
