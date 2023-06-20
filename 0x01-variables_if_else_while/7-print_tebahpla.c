#include <stdio.h>
/**
 * main - print alphabet in reverse order
 * Return: 0 for success
 */
int main(void)
{
char z;
z = 'a';
z = 'z';
for (z = 'z'; z >= 'a'; z--)
       putchar(z);
putchar('\n');
return (0);
}
