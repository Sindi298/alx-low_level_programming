#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *doggie;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
	{
		free(doggie);
		return (NULL);

	}
	doggie->name = malloc(i * sizeof(doggie->name));
	if (doggie->name == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		doggie->name[k] = name[k];
	doggie->age = age;
	doggie->owner = malloc(j * sizeof(doggie->owner));
	if (doggie->owner == NULL)
	{
		free(doggie->owner);
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		doggie->owner[k] = owner[k];
	return (doggie);
}
