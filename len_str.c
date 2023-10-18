#include "main.h"

/**
 * _strlen - length of str
 * @n: String
 * Return: length
 */
int _strlen(char *n)
{
	int count = 0;

	while (n[count] != '\0')
		count++;
	return (count);
}

/**
 * _strlencons - length of str
 * @n: String
 * Return: length
 */
int _strlencons(const char *n)
{
	int count = 0;

	while (n[count] != '\0')
		count++;
	return (count);
}
