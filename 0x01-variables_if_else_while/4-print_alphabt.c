#include <stdio.h>
/**
 * main - Print all the letters except q and e
 * Return: 0 for success
 */

int main(void)
{
	char c, e, q;
	e = 'e';
	q = 'q';
	c = c - 'e';
	c = c - 'q';

	for (c = 'a'; c <= 'z'; c++)
		{
		putchar (c);
		}
putchar ('\n');
return (0);
}
