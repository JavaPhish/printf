#include "holberton.h"
#include <unistd.h>

int print_unsigned(unsigned int n)
{
unsigned int z;
  
  z = print_intdec(n);

  if (z < 0)
    {
      z = -1 * z;
    }
  return (z);
}

void print_reverse(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{

	}




	for (i = i - 1; i >= 0; --i)
	{
		_putchar(s[i]);
	}

} 
