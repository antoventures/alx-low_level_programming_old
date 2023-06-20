#include <stdio.h>
/**
 * main - print single digit numbers
 * Return: 0 for success
 */
int main(void)
{
int i, l;
i = 0;
l = '\n';
while (i < 10)
{
	putchar(i, l);
	i++;
}
return (0);
}
