#include "main.h"

/**
 * print_uns_int - A function that prints an unsigned integer in base 10
 * @ap: integer to print
 * Return: number of printed digits
 */
int print_uns_int(va_list ap)
{
	unsigned int i[10];
	unsigned int j = 0, m = 1000000000, n, sum = 0;
	int count = 0;

	n = va_arg(ap, unsigned int);
	i[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m = m / 10;
		i[j] = (n / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum = sum + i[j];
		if (sum || j == 9)
		{
			_putchar('0' + i[j]);
			count++;
		}
	}
	return (count);
}
