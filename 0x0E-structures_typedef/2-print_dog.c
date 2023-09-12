#include <stdio.h>
#include "dog.h"

/**
* print_dog - dd
* @d:dd
* Return: void
*
*/
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? : "(nil)");
printf("Age: %d\n", d->age);
printf("Owner: %s\n", d->owner` ? : "(nil)");
}
}
