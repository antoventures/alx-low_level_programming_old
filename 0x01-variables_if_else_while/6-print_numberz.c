#include <stdio.h>
/**
 * main - print single digit numbers
 * Return: 0 for success
 */
int main(void)
{
int i;
i = 0;
while (i < 10)
{
	putchar(i);
	putchar('\n');
	i++;
}
return (0);
}
