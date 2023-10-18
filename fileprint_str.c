#include "main.h"
#include <stddef.h>

/**
 * print_str - print string
 * @list: the str inputed
 * Return: len
 */
int print_str(va_list list)
{
	int len;
	int i = 0;
	char *s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(nil)";
		len = _strlen(s);

		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
	else
	{
		len = _strlen(s);

		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
}
