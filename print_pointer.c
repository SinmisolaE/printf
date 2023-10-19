#include "main.h"
#include <stddef.h>

/**
 * print_pointer - prints pointer
 * @val: value
 * Return: int
 */

int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	char *hex_buffer;
	long int a;
	int i, b;

	p = va_arg(val, void *);

	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');

	hex_buffer = malloc(17);
	if (hex_buffer == NULL)
		return (-1);
	snprintf(hex_buffer, 17, "%0161x", a);

	for (i = 0; hex_buffer[i] != '\0'; i++)
	{
		_putchar(hex_buffer[i]);
	}
	free(hex_buffer);
	b = i;
	return (b + 2);
}
