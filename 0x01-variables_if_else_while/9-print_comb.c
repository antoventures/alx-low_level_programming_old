#include <stdio.h>
/**
 * main - combinations of single-digit numbers.
 * Return: 0 success
 */

int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
for (i = 0; i <= 9; i++)
putchar(i + ',');
putchar(i);
}
return (0);
}
