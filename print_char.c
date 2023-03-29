#include "main.h"

/**
 * print_char - prints char
 * @ap: character to print
 * Return: integer
 */
int print_char(va_list ap)
{
	char c = (char)va_arg(ap, int);
	int count = 0;

	if (c)
	{
		count = _putchar(c);
		return (count);
	}
	return (0);
}
