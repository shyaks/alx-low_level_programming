#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determines if a number is positive, negative or zero.
 *
 * return: 0 on success, non-zero value on error
*/
int main(void)
{
	int n;

	srand(time(0));
	n = randrand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
