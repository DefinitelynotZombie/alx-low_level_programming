#include "main.h"
/**
*print_square - prints out squares
*@size: parameter
*Return:returns nothing on success
*/
void print_square(int size)
{
int ini1, ini2;
if (size > 0)
{
for (ini1 = 0; ini1 < size; ini1++)
{
for (ini2 = 0; ini2 < (size - 1); ini2++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
