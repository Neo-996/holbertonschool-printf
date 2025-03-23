#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

/**
 * _printf - custom printf function to handle %c, %s, and %%
 * @format: The format string containing the characters and specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
  va_list args;
  int count = 0;
  const char *ptr = format;

  va_start(args, format);

  while (*ptr != '\0')
    {
      if (*ptr == '%' && *(ptr + 1) != '\0')
	{
	  ptr++;

	  if (*ptr == 'c')
	    {
	      char ch = va_arg(args, int);
	      _putchar(ch);
	      count++;
	    }
	  else if (*ptr == 's')
	    {
	      char *str = va_arg(args, char *);

	      if (str == NULL)
		str = "(null)";

	      while (*str)
		{
		  _putchar(*str);
		  str++;
		  count++;
		}
	    }
	  else if (*ptr == '%')
	    {
	      _putchar('%');
	      count++;
	    }
	  else
	    {
	      _putchar('%');
	      _putchar(*ptr);
	      count += 2;
	    }
	}
      else
	{
	  _putchar(*ptr);
	  count++;
	}
      ptr++;
    }
  va_end(args);

  return (count);
}
	      
