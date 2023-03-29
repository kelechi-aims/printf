#include "main.h"

/**
 * print_char - prints char
 * @ap: character to print
 * Return: integer
 */
int print_char(va_list ap)
{
	char c = (char)va_arg(ap, int);

	if (c)
	{
		_putchar(c);
	}
	return (1);
}
