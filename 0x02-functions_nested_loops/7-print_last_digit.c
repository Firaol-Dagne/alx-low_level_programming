#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints
 *@n: nuber test
 * Return:zero.
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
