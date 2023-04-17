#include "dog.h"

/**
 * free_dog - write a func that free dogs
 * @d: struct
 */

void free_dog(dog_t *d)
{
	free(d);
}
