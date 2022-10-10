#include <stdio.h>
#include "dog.h"
/**
* init_dog - function
* @d: dog
* @name: char
* @age: int
* @owner: owner
* Return: zero
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
