#include "main.h"

/**
 * print_rot - A function that prints in rot13 format
 * @ap: integer to print
 * Return: number of printed digits
 */
int print_rot(va_list ap)
{
	char *rev;
	unsigned int i, j;
	int count = 0;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	rev = va_arg(ap, char *);
	if (rev == NULL)
		rev = "(ahyy)";
	for (i = 0; rev[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (input[j] == rev[i])
			{
				_putchar(output[j]);
				count++;
				break;
			}
		}
		if (!input[j])
		{
			_putchar(rev[i]);
			count++;
		}
	}
	return (count);
}
