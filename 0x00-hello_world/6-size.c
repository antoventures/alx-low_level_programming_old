#include <stdio.h>
/**
 * main - I'm printing the sizes of different datatypes in C
 * Return:0 (success)
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float f;
printf("Size of char is %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of int is %lu byte(s)\n", (unsigned long)sizeof(j));
printf("Size of long int is %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of long long int is %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of float is %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
