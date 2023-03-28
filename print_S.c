#include "main.h"

/**
 * print_S - prints string with non printable characters by
 * converting the non printable character to \x
 * @ap: variadic argument
 * Return: string with the converted character
 */
int print_S(va_list ap)
{
	int count = 0;
	unsigned int i;
	char *str = va_arg(ap, char *);

	if (str = NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count = count + 2;
			count = count + print_hex(ap);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
