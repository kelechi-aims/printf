#include "main.h"

/**
 * print_p - prints an address of a variable
 * @ap: variadic parameter
 * Return: integer
 */
int print_p(va_list ap)
{
	int count = 0;
	unsigned int a[16];
	unsigned int i = 0, res = 0;
	unsigned long n, m = 1152921504606846976;
	char *str = "(nil)";

	n = va_arg(ap, unsigned long);
	if (n == 0)
	{
		for (; str[i]; i++)
		{
			_putchar(str[i]);
			count++;
		}
		return (count);
	}
	_putchar('0');
	_putchar('x');
	count = 2;

	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		res += a[i];
		if (res || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			count++;
		}
	}
	return (count);
}
