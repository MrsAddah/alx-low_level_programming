#include "main.h"
/**
 * print_sign - Entry point
 * @n: carrier variable
 * Description: prints the sign of a number
 * Return: 1 if n>0, 0 if n == 0, -1 if n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
	_putchar('\n');
}
