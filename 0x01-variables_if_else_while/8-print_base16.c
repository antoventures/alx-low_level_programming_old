#include <stdio.h>
/**
 * main - Hexadecimal
 * Return: 0 success
 */

int main(void)
{
int i, a;

for (i = 0; i < 10; i++)
{
putchar(i);
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
}
putchar('\n');
return (0);
}
