#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0 for success
 */

int main(void)
{
char c, d;
for (c = 'a'; c <= 'z'; c++)
{
putchar (c);
}

for (d = 'A'; d <= 'Z'; d++)
{
putchar ('\n');
putchar (d);
}
return (0);
}
