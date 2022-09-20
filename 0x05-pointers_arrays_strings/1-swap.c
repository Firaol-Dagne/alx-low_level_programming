#include "main.h"
/**
 * swap_int - function
 * @a: parametrs
 * @b: the second parametrs
 * Return: zero
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
