#ifndef _PRINTF_
#define _PRINTF_

#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include <string.h>
//structure
	typedef struct choice
	{
	char letter;
	int (*print)(va_list ap);
	}choice_t;
//function
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);

#endif
