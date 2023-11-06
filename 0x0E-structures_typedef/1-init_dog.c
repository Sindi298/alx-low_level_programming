#include "dog.h"
#include <stddef.h>

/**
  *init_dog - initialize a dog
  *@d: pointer to dog
  *@name: name of dog
  *@age: age of dog
  *@owner: owner of dog
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
