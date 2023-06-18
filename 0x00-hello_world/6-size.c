#include <stdio.h>
/**
 *
 * main - I'm printing the sizes of different datatypes in C
 * Return:0 (success)
 */
int main(void)
{
	char i;
	int k;
	long int l;
	long long int k;
	float f;
printf("sizeof char is %zu byte(s)\n", sizeof(char));
printf("sizeof int is %zu byte(s)\n", sizeof(int));
printf("sizeof long int is %zu byte(s)\n", sizeof(long int));
printf("sizeof long long int is %zu byte(s)\n", sizeof(long long int));
printf("sizeof float is %zu byte(s)\n", sizeof(float));
return (0);
}
