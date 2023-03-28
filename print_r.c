#include "main.h"

/**
 * print_rev_str - A function that prints the reverse of a reving
 * @ap: integer to print
 * Return: number of printed digits
 */
int print_rev_str(va_list ap)
{
	int i, count = 0;
	char *rev;

	rev = va_arg(ap, char *);
	if (rev == NULL)
		rev = ")llun(";
	while (rev[i])
		i++;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(rev[i]);
		count++;
	}
	return (count);
}
