#include "main.h"
/**
* _strcpy - Copy and paste string
*@dest: destination
*@src: source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int ini = 0;
while (*(src + ini) != '\0')
{
*(dest + ini) = *(src + ini);
ini++;
}
*(dest + ini) = '\0';
return (dest);
}
