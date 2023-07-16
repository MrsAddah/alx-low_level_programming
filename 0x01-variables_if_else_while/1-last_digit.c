#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point (A program which assign a random number to a variable)
 * the result is printed out if the last digit is greater than 5
 * the result is also printed out if digit is 0 or less than 6
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		r = n % 10;
		printf("Last digit of %d is %d ", n, r);
		if (r > 5)
			printf("and is greater than 5\n");
		else if (r == 0)
			printf("and is 0\n");
		else if (r < 6 && r != 0)
			printf("and is less than 6 and not 0\n");
		return (0);
}
