#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - function
*@b: int
Return: zero
*/
void *malloc_checked(unsigned int b)
{
int *m = malloc(b);
if (m == 0)
exit(98);

return (m);
}
