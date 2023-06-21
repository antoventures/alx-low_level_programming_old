#include <stdio.h>
/**
 * main - combinations of single-digit numbers.
 * Return: 0 success
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++) {

putchar(' ');
putchar(i + '0');
putchar(',');
}
return (0);
}
