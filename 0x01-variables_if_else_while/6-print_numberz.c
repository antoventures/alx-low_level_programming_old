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
	i++;
	putchar('\n');
}

return (0);
}
