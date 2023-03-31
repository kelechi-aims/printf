#include "main.h"
/**
 * handle_print - Prints an argument based on its type
 * @fmt: Formatted string in which to print the arguments.
 * @list: List of arguments to be printed.
 * @ind: ind.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: 1 or 2;
 */
int handle_print(const char *fmt, int *ind, va_list list,
	int flags, int width, int precision, int size)
{
	int i, unknown_len = 0, printed_chars = -1;
	fun_t arr[] = {
		{'%', print_pcent}, {'\0', NULL}
	};
	for (i = 0; arr[i].t != '\0'; i++)
		if (t[*ind] == arr[i].t)
			return (arr[i].f(list, flags, width, precision, size));

	if (arr[i].t == '\0')
	{
		if (t[*ind] == '\0')
			return (-1);
		unknown_len += write(1, "%%", 1);
		if (t[*ind - 1] == ' ')
			unknown_len += write(1, " ", 1);
		else if (width)
		{
			--(*ind);
			while (t[*ind] != ' ' && t[*ind] != '%')
				--(*ind);
			if (t[*ind] == ' ')
				--(*ind);
			return (1);
		}
		unknown_len += write(1, &t[*ind], 1);
		return (unknown_len);
	}
	return (printed_chars);
}
