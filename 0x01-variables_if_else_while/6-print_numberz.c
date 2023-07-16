#include <stdio.h>
/**
 * A program that prints all single digit numbers of base 10
 * And result starting from 0
 * Return: Aways 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
