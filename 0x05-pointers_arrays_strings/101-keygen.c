#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password and prints it.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char randomChar;
	int sum = 0;

	srand(time(0));

	while (sum < 2772)
	{
		randomChar = rand() % 128;
		sum += randomChar;
		putchar(randomChar);
	}
	putchar(2772 - sum);
	return (0);
}
