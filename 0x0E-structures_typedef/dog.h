#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stucture for storing the info dog
 * @name: pointing to character string repreenting the dog's name
 * @age: float type representing the dog's age
 * @owner: pointer to char string pointing to the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
