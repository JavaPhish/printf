#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * format_spec - Loops through all possible format specifiers and calls
 * The corresponding function to print it
 * @fs: The format specifer to be evaluated
 * @params: The va_list from printf to print from
 *
 * Return: The number of bytes printed (0 if nothing)
 */
int format_spec(char fs, va_list params)
{
	switch (fs)
	{
		case 's':
			return (print_str(va_arg(params, char *)));
		break;
		case 'd' || 'i':
			return (print_intdec(va_arg(params, int)));
		break;

		case 'c':
			return (print_char(va_arg(params, int)));
		break;
		case '%':
			return (_putchar('%'));
		break;
	}

	return (0);
}
