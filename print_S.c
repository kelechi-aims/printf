#include "main.h"

/**
 * print_S - prints string with non printable characters by
 * converting the non printable character to \x
 * @ap: variadic argument
 * Return: string with the converted character
 */
int print_S(va_list ap)
{
	unsigned int i = 0;
	int count = 0;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";
	for (; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += print_hex(ap);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
