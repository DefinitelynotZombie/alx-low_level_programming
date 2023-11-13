#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: String to be printed in reverse.
 */
void print_rev(char *s)
{
	int len = 0, index = 0;

	len = _strlen(s);

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}

/**
 * _strlen - Calculates the length of a string.
 * @s: String to be measured.
 * Return: Length of the string.
 */

int _strlen(char *s)
{
	int count, length;

	length = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		length++;
	}

	return (length);
}
