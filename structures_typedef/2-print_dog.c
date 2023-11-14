#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog
 * @d: struct variable
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(0);
	}

	if (d->name != '\0'))
	{
		printf("Name: %s/n", d->name);
	}
	else
	{
		printf("Name: (nill)\n");
	}

	if (d->age != '\0')
	{
		printf("Age: %f\n", d->age);
	}
	else 
	{
		printf("Age: (nill)\n");
	}

	if (d->owner != '\0')
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nill)\n");
	}
}
