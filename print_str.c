#include "main.h"

/**
 * print_str - prints char
 * @ap: string to print
 * Return: integer
 */
int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		_putchar(str[i++]);
	}
	return (i);
}
