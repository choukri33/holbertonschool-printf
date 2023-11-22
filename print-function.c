#include "main.h"
#include <stdarg.h>

int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return(1);
}
int print_str(va_list ap)
{
	char *str;
	int len;
	str = va_arg(ap, char *);

	if (str == NULL){
	return (0);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
	_putchar(str[len]);
	}
	return (len);
}
int print_pourcent(__attribute__((unused)) va_list ap)
{
	_putchar('%');
	return(1);
}

