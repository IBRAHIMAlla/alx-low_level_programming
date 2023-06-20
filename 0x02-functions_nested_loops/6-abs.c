#include "main.h"
/**
 * _abs - computes the absolute value
 * @c: The character to be checked
 * Return: Absolute value of number or zero.
 */
int _abs(int c)
{
if (c < 0)
{
int abs_v;
abs_v = c * -1;
return (abs_v);
}
return (c);
}
