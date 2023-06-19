#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0 for success
 */

int main(void)
{
char c;
char d;
for(c = 'a'; c <= 'z'; c++)
{
putchar (c); 
}
putchar ("\n");
for (d = 'A'; d <= 'Z'; d++)
{
putchar (d);
}
return (0);
}
