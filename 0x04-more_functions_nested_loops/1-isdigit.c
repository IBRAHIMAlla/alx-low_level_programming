#include "main.h"
/**
* _isdigit - Checks for a digit 0 through 9
* @c: integer
* Return: 1 for a character that be a digit or 0 for any else
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
