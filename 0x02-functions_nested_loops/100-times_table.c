#include "main.h"
/**
*print_times_table - prints the times table with parameter
*@n: parameters
*Return: returns nothing always
*/
void print_times_table(int n)
{
int digits, multi, result;
if (n <= 15 && n >= 0)
{
for (digits = 0; digits <= n; digits++)
{
_putchar('0');

for (multi = 1; multi <= n; multi++)
{
_putchar(',');
_putchar(' ');
result = digits * multi;
if (result <= 99)
_putchar(' ');

if (result <= 9)
_putchar(' ');
if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar((result / 10) % 10 + '0');
}
else if (result <= 99 && result >= 10)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}
