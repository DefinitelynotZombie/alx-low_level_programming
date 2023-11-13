#include "main.h"
/**
* print_array - print nth element of an array
* @a: array
* @n: number of elements
* Return: nothing
*/
void print_array(int *a, int n)
{
int ini;

for (ini = 0; ini < n ; ini++)
{
if (ini != n - 1)
printf("%d, ", a[ini]);
else
printf("%d", a[ini]);

}
printf("\n");
}
