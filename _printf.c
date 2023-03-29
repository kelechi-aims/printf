#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: parameter to check
 * Return: integer
 */

int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i = 0, count = 0, temp = 0;
	int (*f)(va_list);

	va_start(ap, format);
	if (!format || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	while (*format != '\0' && format[i])
	{
		if (format[i] != '%')
		{
			temp = _putchar(format[i]);
			count = count + temp;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
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
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
				}
				temp = f(ap);
				count = count + temp;
				i = i + 2;
				continue;
			}
		}
		i++;
	}
	va_end(ap);
	return (count);
}
