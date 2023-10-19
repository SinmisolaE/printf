#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints str in reverse
 * @list: argument passed
 * Return: length of string
 */
int print_rev(va_list list)
{
	char *str = va_arg(list, char *);
	int count = 0;
	int i;

	if (str == NULL)
		str = "(nil)";

	while (str[count] != '\0')
		count++;

	for (i = count - 1; i >= 0; i--)
		_putchar(str[i]);

	return (count);
}
