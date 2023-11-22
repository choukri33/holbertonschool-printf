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

{

int print_int(va_list ap)
{
        int i;
        i =va_arg(ap, int);
        _putchar(i);

        return(1);
}

{

int p_int_rec(long int n, int count)
{
	int nr_digits = count;

	if (n < 0)
	{
		_putchar('-');
		n = (-1) * n;
	}
	if (n / 10)
	{
		nr_digits = p_int_rec(n / 10, count + 1);
	}
	_putchar(n % 10 + '0');
	return (nr_digits);
}
