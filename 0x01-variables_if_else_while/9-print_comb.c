#include <stdio.h>
/**
 * main - combinations of single-digit numbers.
 * Return: 0 success
 */

int main(void)
{
int i;
i = 0;
while (i < 10)
{
putchar(i);
i++;
putchar(',');
putchar(' ');
}
return (0);
}
