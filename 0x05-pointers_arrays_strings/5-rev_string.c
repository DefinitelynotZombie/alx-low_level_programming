#include "main.h"
/**
*rev_string - prints out a string backwards
*@s: String toprint
*Return: Nothing on success
*/
void rev_string(char *s)
{
int i = 0, length;
length = _strlen(s) - 1;

while (length > i)
{
swap_char(s + length, s + i);
i++;
length--;
}
}

/**
 *_strlen - prints out the length of a string
 * @s: string to check
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;

for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}

/**
*swap_char - swap two characters
*@a: first character
*@b: second character
*Return: nothing
*/

void swap_char(char *a, char *b)
{
char tmp = *a;
*a = *b;
*b = tmp;
}
