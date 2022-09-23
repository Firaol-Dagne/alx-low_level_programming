#include <stdio.h>
#include <stdlib.h>
/**
* create_array - function
* @size: parameters
* @c: parametrs
* Return: zero
*/
char *create_array(unsigned int size, char c)
{
char *m = malloc(size);
if (size == 0 || m == 0)
	return (0);

while (size--)
	m[size] = c;

return (m);
}
