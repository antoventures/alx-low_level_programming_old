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
printf("Size of char is %lu byte(s)\n", sizeof(i));
printf("Size of int is %lu byte(s)\n", sizeof(j));
printf("Size of long int is %lu byte(s)\n", sizeof(k));
printf("Size of long long int is %lu byte(s)\n", sizeof(l));
printf("Size of float is %lu byte(s)\n", sizeof(f));
return (0);
}
