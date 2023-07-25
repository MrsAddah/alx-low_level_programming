#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int j, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (j = len - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}

	putchar('\n');
}
