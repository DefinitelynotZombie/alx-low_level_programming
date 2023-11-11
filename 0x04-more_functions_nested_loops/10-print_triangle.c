#include "main.h"
/**
*print_triangle - prints out a triangle
*@size:size parameter of triangle
*Return:returns nothing on success
*/
void print_triangle(int size)
{
int ini1, ini2;

if (size > 0)
{
for (ini1 = 1; ini1 <= size; ini1++)
{
for ((ini2 = size - ini1); ini2 > 0; ini2--)
_putchar(' ');

for (ini2 = 0; ini2 < ini1; ini2++)
_putchar('#');

if (ini1 == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
