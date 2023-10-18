#include "main.h"

/**
 * print_char - prints char
 * @list: takes input of the char
 * Return: 1
 */
int print_char(va_list list)
{
	char s;

	s = va_arg(list, int);
	_putchar(s);
	return (1);
}
