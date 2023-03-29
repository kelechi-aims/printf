#include "main.h"

/**
 * print_pcent - writes the character c to stdout
 * @ap: va_list
 * @buff: buffer pointer
 * @i: index for buffer pointer
 * Return: 1.
 */
int print_pcent(va_list ap)
{
	UNUSED(ap);
	return (write(1, "%%", 1));
}
