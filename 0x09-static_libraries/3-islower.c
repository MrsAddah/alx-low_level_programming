#include "main.h"
/**
 * _islower - Entry point
 * Description: checks if a character is lowercase
 * @c: checks the integer value it receives
 * Return: 1 if true. 0 if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}


