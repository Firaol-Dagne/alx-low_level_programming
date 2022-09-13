#include "main.h"
/**
 * _islower - lowercase
 *
 * Return: zero
 */
int _islower(int  c)
{
	int t;
	if (c >= 65 && c <=90)
	{
		t = 0;
	}
	else if (c >= 97 && c <=122)
	{
		t = 1;
	}	
	return (t);
}

