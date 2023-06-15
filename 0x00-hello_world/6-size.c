#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("size of a char: %ld byte(s)\n", siezof(char));
printf("size of an int: %ld byte(s)\n", siezof(int));
printf("size of a long int: %ld byte(s)\n", siezof(long int));
printf("size of a long long int: %ld byte(s)\n", siezof(long long int));
printf("size of a float: %ld byte(s)\n", siezof(float));
return (0);
}
