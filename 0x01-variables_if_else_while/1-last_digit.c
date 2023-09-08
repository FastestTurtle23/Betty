#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Prints a text according number
 * Return: Always success
 *
*/


int main(void)
{
	int n; digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (lastd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if(digit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (digit < 6 && lastd != 0)
	{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
