#include <stdio.h>
/**
 * main - A program that prints all single digit numbers of base 10
 * And the result should start from 0
 *Return: 0 (Success)
 */

int main(void)
{
	int n;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
