#include "main.h"

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
