#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _printf - copy cat printf that works a lot worse
 * @format: The format specified by the user
 *
 * Return: The number of bytes printed to console
 */
int _printf(const char *format, ...)
{
	va_list args;
	int loop, total_chars;
	char *string;

	if (!format)
		return (-1);

	va_start(args, format);

	total_chars = 0;
	string = (char *)format;
	loop = 0;
	while (string[loop] != '\0')
	{
		if (string[loop] == '%')
		{
			loop++;
			total_chars = total_chars + format_spec(string[loop], args);
		}
		else
		{
			total_chars = total_chars +  _putchar(string[loop]);
		}
		loop++;
	}
	va_end(args);

	return (total_chars);
}
