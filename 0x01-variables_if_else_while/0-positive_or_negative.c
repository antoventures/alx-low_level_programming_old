#include <stdio.h>
#include <time.h>
/**
 * main - This program will assign a random number to the variable n each time it is executed
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		prinf("%c: is positive");
	else if(n==0)
		printf("%c: is zero");
	else
		printf("%c: is netagive");
	return (0);
}
