#include "holberton.h"
#include <unistd.h>

int print_char(char c)
{
	return(write(1, &c, 1));
}


 int print_str(char *s)
{
        return(write(1, s, sizeof(s)));
}
