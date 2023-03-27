#include <stdarg.h>
#include "main.h"

/**
 * check_specifier - checks specifier
 * @format: format specifier to check
 * Return: a pointer to a function if successful or NULL if not
 */
int (*check_specifier(const char *format))(va_list)
{
	int i;

	fun_t arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pcent},
		{NULL, NULL}
	};

	for (i = 0; arr[i].t != NULL; i++)
	{
		if (*(arr[i].t) == *format)
		{
			return (arr[i].f);
		}
	}
	return (NULL);
}

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

	if (format == NULL)
		return (-1);
	va_start(ap, format);
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
		i++;
	}
	va_end(ap);
	return (count);
}
