#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: parameter to check
 * Return: integer
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, count = 0, temp = 0;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	for (i = 0; *format != '\0' && format[i]; i++)
	{
		if (format[i] != '%')
		{
			temp = _putchar(format[i]);
			count = count + temp;
			continue;
		}
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				temp = _putchar('%');
				count = count + temp;
				i = i + 2;
				continue;
			}
			if (format[i + 1] != '%')
			{
				f = check_specifier(&format[i + 1]);
				if (f == NULL)
					return (-1);
				temp = f(ap);
				count = count + temp;
				i = i + 2;
				continue;
			}
		}
	}
	va_end(ap);
	return (count);
}
