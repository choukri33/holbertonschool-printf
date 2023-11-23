#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
<<<<<<< HEAD
#include <string.h>
//structure
	typedef struct choice
	{
	char letter;
	int (*print)(va_list ap);
	}choice_t;
//function
=======

typedef struct choice
{
	char letter;
	int (*print)(va_list ap);
} choice_t;

>>>>>>> f02e2b948870ef369277202a2016b5a3fb948ccb
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int print_pourcent(va_list ap);
int print_recursion_decimal(int n);
int print_decimal(va_list ap);

#endif
