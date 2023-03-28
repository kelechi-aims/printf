#include "main.h"

/**
 * print_X - prints a number,s ascii value in uppercase
 * hexadecimal
 * @ap: variadic parameter
 * Return: ascii value
 */
int print_X(va_list ap)
{
	unsigned num, m = 268435456, i = 1, res = 0;
	char di;
	unsigned arr[8];
	int count = 0;
	
	num = va_arg(ap, unsigned int);
	di = 'A' - ':';
	arr[0] = num / m;
	for (; i < 8 ; i++)
	{
		m = m / 16;
		arr[i] - (num / m ) % 16;
	}
	for (i =0; i < 8; i++)
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
