#include "main.h"

/**
 * print_buf - prints buffer
 * @buff: buffer pointer
 * @buffe: number of bytes to print
 * Return: number of bytes printed.
 */
int print_buf(char *buff, unsigned int buffe)
{
	return (write(1, buff, buffe));
}
