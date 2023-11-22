#include "main.h"

int print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);

	_putchar(c);

	return 1;
}

int print_str(va_list ap)
{
	char *str;
	int lenght = 0;

	str = va_arg(ap, char *);

	if (str == NULL)
	return (0);

	while (str[lenght] != '\0')
	{
	_putchar(str[lenght]);
	lenght++;
	}

	return (1);
}
void print_prct(int *char_num)
{

		_putchar('%');
			char_num++;

}
