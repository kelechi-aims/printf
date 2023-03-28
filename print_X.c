#include "main.h"

/**
 * print_X - prints an ascii value in uppercase hexadecimal
 * @ap: variadic parameter
 * Return: ascii value
 */
int print_X(va_list ap)
{
	unsigned int i[8];
	unsigned int j, m = 268435456, n, res = 0;
	char diff;
	int count;

	n = va_arg(ap, unsigned int);
	diff = 'A' - ':';
	i[0] = n / m;
	for (j = 1; j < 8; j++)
	{
		m /= 16;
		i[j] = (n / m) % 16;
	}
	for (j = 0; j < 8; j++)
	{
		res += i[j];
		if (res || j == 7)
		{
			if (i[j] < 10)
				_putchar('0' + i[j]);
			else
				_putchar('0' + diff + i[j]);
			count++;
		}
	}
	return (count);
}
