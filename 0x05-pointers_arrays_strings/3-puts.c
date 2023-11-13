#include "main.h"
/**
 * _puts - Prints a string.
 * @str: String to be printed.
 * Description: Prints a string followed by a newline.
 * On success: No return value.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
