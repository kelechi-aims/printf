#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

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
int (*check_specifier(const char *format))(va_list);
int print_char(va_list ap);
int print_str(va_list ap);
int print_b(va_list ap);
int print_p(va_list ap);
int print_dec_base(va_list ap);
int print_int(va_list ap);
int print_uns_int(va_list ap);
int print_uns_oct(va_list ap);
int print_S(va_list ap);
int print_rev_str(va_list ap);
int print_rot(va_list ap);
int print_X(va_list ap);
int print_hex(va_list ap);
int print_buf(char *buff, unsigned int buffe);
unsigned int buffer(char *buff, char c, unsigned int buffe);
int print_pcent(va_list ap);
int print_add(va_list ap);
int print_less(va_list ap);
int print_space(va_list ap);
int print_sharp(va_list ap);

#endif
