#include "main.h"

void print_char(va_list ap, int *char_num)
{
	char c = va_arg(ap, int);

	write(1, &c, 1);
	*char_num++;
}

void print_str(va_list ap, int *char_num)
{
	char *str;
	int str_len = 0;

	str = va_arg(ap, char *);

	if (str == NULL)
	exit(0);

	while (str[str_len] != '\0')
	str_len++;
	write(1, str, str_len);
	*char_num += str_len;

}

void print_prct(int *char_num)
{
	char prct = va_arg(ap, int);

	write(1, &prct, 1);
	*char_num++;

}
