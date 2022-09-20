#include "main.h"
/**
 * _puts - function
 * @str: parametrs
 * Return: zero
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
