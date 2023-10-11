#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees memory allocated for a struct dog
  * @d: struct dog to free
  *
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
