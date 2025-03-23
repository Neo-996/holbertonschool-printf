Abdulelah and Maram's printf Project! 😎

A simplified version of the C printf function. It prints text, strings, characters, and integers to the screen.

🧠 What It Does

Supports %c, %s, %d, %i, and %%

Uses va_list for variable arguments

Prints using write() (no _putchar)

🔧 Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

👥 Authors

Abdulelah Alshehri

Maram Alsofyani

📁 Files

main.h – Header file

_printf.c – Main logic

man_3_printf – Manual page

README.md – This file

✅ Example

_printf("Name: %s, Age: %d", "Ali", 100);

Output:

Name: Ali, Age: 100

🧪 Test it

Create a tests/main.c and compile:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c tests/main.c



