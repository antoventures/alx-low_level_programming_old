#include <stdio.h>
/**
 * main - Hexadecimal
 * Return: 0 success
 */

int main(void)
{
int i, a;
a = 'a';

for (i = 0; i < 10; i++)
	{
	putchar(i);

	while (a <= 'f')
		putchar(a);
		a++;
	}
putchar('\n');
return (0);
}
