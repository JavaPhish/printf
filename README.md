# _printf  :rocket:

## Project details

Create a version of printf consistent with Holberton School standards. `prinf`

## Function prototype

```
int _printf(const char *format, ...);
```

## Background

This is a  ```printf```, created by Holberton School for students. The motivation for writing a `printf` stems from the need to reinforce the concepts of the C programming language learned by students in the first couple of months


## Format specifiers

| Specifier type | Description |
| --- | --- |
| c | One single character |
| s | A string of characters |
| d | A signed decimal integer |
| i | A signed decimal integer |


## Examples
**Character:**
 ```
_printf("%c", 'x');
 ```
**Output:** x

**String:** ```
	        _printf("%s", 'Hello, Holberton!');
		    ```
**Output:** Hello, Holberton!

**Decimal Integer:**  ```
	        _printf("%i", 7);
		      ```
**Output:** 7

**Decimal Integer:**  ```
	        _printf("%d", 9);
		      ```
**Output:** 9

## Tasks
Number | Description
------ | -----------
0      | Write a function that produces output according to a format which handles the following conversion specifiers: c, s, and %
1      | Write a function that produces output according to a format which handles the following conversion specifiers: d, i
2      | Create a man page for your function

## Compilation

The compiler used in this particular project is gcc version 4.8.4 on Ubuntu 14.04 LTS.  Files are compiled by running: 
```
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
```


## Authors

[Faizan Khan ](https://github.com/b1naryp0et):basketball:


[Carter Clements](https://github.com/JavaPhish) :gift:
