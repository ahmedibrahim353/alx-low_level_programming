#include "dog.h"

/**
 * init_dog - dog info
 *
 * @d: pointer to my_dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 *
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}

}
