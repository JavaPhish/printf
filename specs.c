#include "holberton.h"
#include <unistd.h>

int print_char(char c)
{
	return(write(1, &c, 1));
}


 int print_str(char *str)
{
	int i;
	int x = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		x = (x + _putchar(str[i]));
	}
			return (x);
}

int print_intdec(int n)
{

	int v;
	int w = n % 10;
	int x;
	int y = 1;
	int z = 1;

	n = n / 10;
	v = n;

	if (w < 0)
	{
		_putchar('-');
		v = -v;
		n = -n;
		w = -w;
		z++;
	}
	if (v > 0)
	{
		while (v / 10 != 0)
		{
			y = y * 10;
			v = v / 10;
		}
		v = n;
		for (; y > 0; z++)
		{
			x = v / y;
			_putchar(x + '0');
			v = v - (x * y);
			y = y / 10;
		}
	}
	_putchar(w + '0');

	return (z);
}
