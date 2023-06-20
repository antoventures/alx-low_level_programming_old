#include <stdio.h>
/**
 * main - printing  Numbers
 * Return: 0 for success
 */
int main(void)
{
int count;
count = 0;
while (count < 10)
{
	printf("%d",count);
	count++;
}
putchar('\n');
return (0);
}
