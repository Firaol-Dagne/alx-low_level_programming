#include "main.h"
/**
 * print_alphabet_x10 - print 10x
 *
 * Return: zero
 */
void print_alphabet_x10(void)
{
	int i;
	char m;

	for (i = 0; i <=9; i++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}

