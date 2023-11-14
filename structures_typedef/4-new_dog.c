#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, o, x;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;
	d->name = malloc(n * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (x = 0; x < n; x++)
		d->name[x] = name[x];
	d->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;
	d->owner = malloc(o * sizeof(char));
	if (d ->owner == NULL)
	{
		free(d->name);
		free(d);
		return(NULL);
	}
	for (x = 0; x < o; x++)
		d->owner[x] = owner[x];
	return(d);
}
