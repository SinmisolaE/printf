#include "main.h"
#include <stdlib.h>
/**
 * print_binary - prints binary
 * @val: argument
 * Return: integer
 */

int print_binary(va_list val)
{
	int j;
	unsigned int i;
	unsigned int num = va_arg(val, unsigned int);
	int count = 0;
	unsigned int b = 2;

	char *array = malloc(sizeof(char) * 32);

	while (num > 0)
	{
		i = num % b;
		array[count] = i + '0';
		num /= b;
	}

	for (j = count - 1; j >= 0; j--)
		_putchar(array[j]);

	return (count);
}
