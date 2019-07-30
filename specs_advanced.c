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
