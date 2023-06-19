#include <stdio.h>
/**
 * main - I'm printing the sizes of different datatypes in C
 * Return:0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of char is %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int is %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int is %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int is %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float is %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
