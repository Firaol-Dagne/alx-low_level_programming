#include "main.h"
/**
 * _isdigit - check digits
 *
 * @c: paramater
 *
 * Return: zero
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

