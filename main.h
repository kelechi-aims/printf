#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_LONG 2
#define S_SHORT 1

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
int print_minus(va_list ap);
int print_space(va_list ap);
int print_sharp(va_list ap);
int print_flags(const char *format, int *i);
int print_width(const char *format, int *i, va_list list);
int print_precision(const char *format, int *i, va_list list);
int print_size(const char *format, int *i);
int handle_print(const char *fmt, int *ind, va_list list, int flags, int width, int precision, int size);

#endif
