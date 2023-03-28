#include "main.h"

/**
 * buffer - concatenates buffer characters
 * @buff: buffer pointer
 * @c: charcter to concat
 * @buffe: index of buffer pointer
 * Return: index of buffer pointer
 */
unsigned int buffer(char *buff, char c, unsigned int buffe)
{
	if (buffe == 1024)
	{
		print_buf(buff, buffe);
		buff = 0;

	}
	buff[buffe] = c;
	buffe++;
	return (buffe);
}
