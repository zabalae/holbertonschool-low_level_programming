#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: structure variale
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("ok\n")
	}

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
