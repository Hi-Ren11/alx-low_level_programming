#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to the struct dog variable to be intialized
 * @name: pointer to character string rep dog's name
 * @age: floating point number rep the dog's age
 * @owner: pointer to character string rep the dog's owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)

	d->name = name;
	d->age = age;
	d->owner = owner;

}
