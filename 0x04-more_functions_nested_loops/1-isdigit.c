#include "main.h"
/**
*_isdigit - function that checks if a char is a digit or not
*@c: verified character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
