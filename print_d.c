#include "main.h"

/**
 * print_d - A function that prints a decimal base 10
 * @ap: integer to print
 * Return: number of printed digits
 */
int print_dec_base(va_list ap)
{
	int i[10];
	int j = 0, m = 1000000000, n, sum = 0, count = 0;

	n = va_arg(ap, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		count++;
	}
	i[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m = m / 10;
		i[j] = (n / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum = sum + i[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + i[j]);
			count++;
		}
	}
	return (count);
}
