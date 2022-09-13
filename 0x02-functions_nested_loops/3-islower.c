#include "main.h"
/**
 * _islower - lowercase
 *
 * Return: zero
 */
int _islower(int  c)
{
	int t;

	if (c >= 97 && c <=122)
	{
		t = 0;
	}
	else 
	{
		t = 1;
	}	
	return (t);
}

