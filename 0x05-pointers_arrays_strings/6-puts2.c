#include "main.h"

/**
 * puts2 - prints out part of a string
 * @str: string to be printed out
 * Return: void
 **/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}

_putchar('\n');
}
