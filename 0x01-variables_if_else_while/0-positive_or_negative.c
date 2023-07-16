#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main- A program that will assign a random number to the variable each time
 * it checkes the number assigned to n
 * and prints the variable if positve or negative
 * Return: 0 (success)
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%d is positive\n", n);
		else if (n == 0)
			printf("%d is zero\n", n);
		else
			printf("%d is negative\n", n);
		return (0);
}
