#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * get_length - Entry point
 * @str: bbe
 * Return: Always 0
*/
int get_length(const char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);
}
/**
 * copy_string - Entry point
 * @dest: bbe
 * @src: fg
 * Return: Always 0
*/
void copy_string(char *dest, const char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
}

/**
 * new_dog - Entry point
 * @name: bbe
 * @age:fg
 * @owner: g
 * Return: Always 0
*/

dog_t *new_dog(char *name, float age, char *owner)
{
int nameLength, ownerLength;
dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
nameLength = get_length(name);
ownerLength = get_length(owner);
newDog->name = (char *)malloc((nameLength + 1) * sizeof(char));
newDog->owner = (char *)malloc((ownerLength + 1) * sizeof(char));
if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}
copy_string(newDog->name, name);
copy_string(newDog->owner, owner);
newDog->age = age;
return (newDog);
}
