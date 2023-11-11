#include <stdio.h>

/**
*main- prints out the largest prime factor
*of the number
*
*Return: returns 0 on success
*/

int main(void)
{
long num = 612852475143;
int ini;
while (ini++ < num / 2)
{
if (num % ini == 0)
{
num /= 2;
continue;
}

for (ini = 3; ini < num / 2; ini += 2)
{
if (num % ini == 0)
num /= ini;

}
}
printf("%ld\n", num);
return (0);
}
