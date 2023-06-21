#include <stdio.h>
/**
 * main - combinations of single-digit numbers.
 * Return: 0 success
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
int s;
s = ',';
for (s = 0; s <= 9; s++)
{
putchar(' ');
putchar(i + '0');
putchar(s);
}
}
return (0);
}
