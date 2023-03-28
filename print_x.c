#include "main.h"

/**
 * print_hex - prints a number's ascii value in lowercase
 * hexidecimal
 * @ap: variadic argument
 * Return: integer
 */
int print_hex(va_list ap)
{
	unsigned int arr[8];
	unsigned int i = 1, num, m = 268435456, res = 0;
	char di;
	int count;

	num = va_arg(ap, unsigned int);
	di = 'a' - ':';
	arr[0] = num / m;
	for (; i < 8; i++)
	{
		m = m / 16;
		arr[i] = (num / m) % 16;
	}
	for (i = 0; i < 8; i++)
	{
		res = res + arr[i];
		if (res || i == 7)
		{
			if (arr[i] < 10)
			{
				_putchar('0' + arr[i]);
			}
			else
			{
				_putchar('0' + di + arr[i]);
			}
			count++;
		}
	}
	return (count);
}
