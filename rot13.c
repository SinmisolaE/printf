#include "main.h"

/**
 * print_rot - prints in rot13 encryption
 * @list: the arg passed
 * Return: length
 */
int print_rot(va_list list)
{
	char *s = va_arg(list, char *);
	char f[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	int count = 0;
	int i, j;

	while (s[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == f[j])
			{
				s[i] = r[j];
				break;
			}

		}
	}
	return (count);
}
