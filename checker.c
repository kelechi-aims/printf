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
		{"%", print_p},
		{"d", print_dec_base},
		{"i", print_int},
		{"u", print_uns_int},
		{"o", print_uns_oct},
		{"b", print_b},
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
