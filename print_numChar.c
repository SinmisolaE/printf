#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _printf - prints produces output to a format
 * @format: conversion specifiers passed
 * Return: length
 */
int _printf(const char *format, ...)
{
	check ch[] = {
		{"%c", print_char},
		{"%s", print_str},
		{"%%", print_percent},
		{"%d", print_int},
		{"%i", print_dec},
		{"%b", print_binary},
		{"%o", print_octa},
		{"%u", print_unsigned},
		{"%x", print_hex},
		{"%X", print_hex_cap}
	};

	int b = 0;
	int x;
	int length = 0;

	va_list t;

	va_start(t, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[b] != '\0')
	{
		x = 9;

		while (x >= 0)
		{
			if (ch[x].form[0] == format[b] && (ch[x].form[1] == format[b + 1]))
			{
				length = length + ch[x].prnt_pointr(t);
				b = b + 2;
				goto Here;
			}
			x--;

		}
		_putchar(format[b]);
		b++;
		length++;
	}
	return (length);
	va_end(t);
}
