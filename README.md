Abdulelah and Maram's printf Project! 😎

A simplified version of the C printf function. It prints text, strings, characters, and integers to the screen.

*Specifier Table:

|   Specifier   |    Output     |
| ------------- | :-----------: |
|       %c      |   character   |
|       %s      |    string     |
|       %d      |     digit     |
|       %i      |    integer    |
|       %%      |  percentage   |
🔧 Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

👥 Authors

Abdulelah Alshehri

Maram Alsofyani


✅ Example

_printf("Name: %s, Age: %d", "Ali", 100);

Output:

Name: Ali, Age: 100

🧪 Test it

Create a tests/main.c and compile:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c tests/main.c



