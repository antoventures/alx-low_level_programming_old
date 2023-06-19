#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - to assign a random number to the variable n each time it is executed
 * Return: 0 for success
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d: is positive\n", n);
}
else if (n == 0)
{
printf("%d: is zero\n", n);
}
else
{
printf("%d: is netagive\n", n);
}
return (0);
}