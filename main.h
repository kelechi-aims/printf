#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct fun - struct op
 * @t: specifier
 * @f: function pointer of the specifier
 */
typedef struct fun
{
	char *t;
	int (*f)(va_list);
} fun_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int print_b(va_list ap);
int print_p(va_list ap);

#endif
