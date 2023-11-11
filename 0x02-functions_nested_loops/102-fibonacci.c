#include <stdio.h>
/**
 *main - prints out first 50 fibonacci suit numbers
 *Return: return 0
 */
int main(void)
{
int ini;
unsigned long n1 = 0, n2 = 1, n3;
for (ini = 0; ini < 50; ini++)
{
n3 = n1 + n2;
printf("%lu", n3);
n1 = n2;
n2 = n3;

if (ini == 49)
printf("\n");
else
printf(", ");

}

return (0);
}
