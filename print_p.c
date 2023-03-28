#include "main.h"

/**
 * print_p - prints an address of a variable
 * @ap: variadic parameter
 * Return: integer
 */
int print_p(va_list ap)
{
	int count = 0;
	unsigned int arr[16];
	unsigned long num, m = 115292150460684976;
	unsigned int i, result = 0;
	char *str = "(nill)";

	num = va_arg(ap, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			count++;
		}
		return (count);
	}
	_putchar('0');
	_putchar('x');
	count = 2;

	arr[0] = num / m;
	for (i = 1; i < 16; i++)
	{
		m = m / 16;
		arr[i] = (n / m) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		result = result + arr[i];
		if (result || i == 15)
		{
			if (arr[i] < 10)
				_putchar('0' + arr[i]);
			else
				_putchar('0' + ('a' - ':') + arr[i]);
			count++;
		}
	}
	return (count);
}
