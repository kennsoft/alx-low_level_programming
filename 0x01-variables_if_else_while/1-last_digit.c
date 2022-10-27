#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints if the number is zero, positive, or negative
 *
 * Description: using the main function
 * this prorgram prints "The last digit"
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater that 5\n", n);
	}
	else if (n == 0)
	{
		printf("The last digit of %d is zero\n", n);
	}
	else if (n < 5)
	{
		printf("The last digit of %d is %d and is less than 5\n", n);
	}
	return (0);
}
