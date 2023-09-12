#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure
 *
 * Return: void
 */
void free_dog(struct dog *d)
{
if (d)
{
if (d->name)
{
free(d->name);
}
if (d->owner)
{
free(d->owner);
}
free(d);
}
}
