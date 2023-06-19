#include <stdio.h>
/**
 * main - I'm printing the sizes of different datatypes in C
 * Return:0 (success)
 */
int main(void)
{
printf("Size of char is %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of int is %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of long int is %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of long long int is %lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of float is %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
