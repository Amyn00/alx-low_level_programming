#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - my first test stuct
 * @name: the name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: this struct is an typdef of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
