#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

int format_spec(char fs, va_list params)
{
	switch (fs)
	{
		case 's':
			return (print_str(va_arg(params, char *)));
		break;
		case 'd':
			return (print_int(va_arg(params, int)));
		break;
/*
		case 'c':
			return (print_char(va_arg(params, char)));
		break;
*/
	}
}
