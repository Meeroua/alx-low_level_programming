#include "dog.h"
#include <stdlib.h>

/**
 *  new_dog - creates a new dog
 *   @name: name of the dog.
 *    @age: age of the dog.
 *     @owner: owner of the dog.
 *
 *      Return: struct dog or NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, lname, lowner;

	dog = malloc(sizeof(*dog));

	if (dog == NULL || !name || !owner)
	{
		free(dog);
		return (NULL);
	}

	/* malloc dog->name */

	for (lname = 0; name[lname]; lname++)
		;

	dog->name = malloc(lname + 1);

	if (!(dog->name))
	{
		free(dog);
		return (NULL);
	}

	/* malloc dog->owner */

	for (lowner = 0; owner[lowner]; lowner++)
		;

	dog->owner = malloc(lowner + 1);

	if (!(dog->owner))
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	/* Copy name, age and owner infos */

	for (i = 0; i < lname; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < lowner; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
