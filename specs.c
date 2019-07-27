#include "holberton.h"


int print_char(char *fmt, char c)
{
	return(write(1, &c, 1));
	
}
 
 ************************
 
 int print_str(char *fmt, char *s)
 
{
     char *x
	     int y;
     
     x = s;
     
     for (; *x; x++)
     {
         
	     return(write(1, x, 1)); 
     }
     
