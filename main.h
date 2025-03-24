#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct specifier - Structure of a format specifier
 * and corresponding function.
 * @c: Format specifier of the type of data to be processed.
 * @spec: Function pointer to corresponding function processing the data.
 */

typedef struct specifier
{
	char c;
	int (*spec)(va_list);
} spec_t;

int _printf(const char *format, ...);
int _putchar(char c)
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
