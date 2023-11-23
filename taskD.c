#include «main.h »
/**
 * p_int_rec - print int digits
 * @n: number
 * @count: digits counter
 * Return: return the digits counter
*/
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
