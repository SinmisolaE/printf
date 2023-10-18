#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
typedef struct 
{
	char *form;
	int (*prnt_pointr)();
}check;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list list);
int print_str(va_list list);
int _strlen(char *n);
int print_percent(void);
int _strlencons(const char *n);
int print_int(va_list args);
int print_dec(va_list args);
int print_unsigned(va_list args);
int print_octa(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_binary(va_list val);
int print_HEX_extra(unsigned int num);
int print_pointer(va_list val);
#endif
