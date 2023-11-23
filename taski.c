#include "main.h"
/**
 *print_char - function that display a character
 *@ap: va_list
 *Return: 1 success.
 */

int print_int(va_list ap)
{
        int i;
        i =va_arg(ap, int);
        _putchar(i);

        return(1);
}

