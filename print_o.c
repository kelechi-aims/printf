#include "main.h"

/**
 * print_uns_oct - A function that prints octal notation
 * @ap: integer to print
 * Return: number of printed digits
 */
int print_uns_oct(va_list ap)
{
	unsigned int i[11];
	unsigned int j = 0, m = 1073741824, n, sum = 0;
	int count = 0;

	n = va_arg(ap, unsigned int);
	i[0] = n / m;
	for (j = 1; j < 11; j++)
	{
		m = m / 10;
		i[j] = (n / m) % 8;
	}

	for (j = 0; j < 11; j++)
	{
		sum = sum + i[j];
		if (sum || j == 10)
		{
			_putchar('0' + i[j]);
			count++;
		}
	}
	return (count);
}
