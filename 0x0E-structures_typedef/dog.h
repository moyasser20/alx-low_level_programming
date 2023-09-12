#ifndef DOG_H
#define DOG_H

/**
* struct dog - Bbb
*
* @name: name of the dog
* @age: age of the dog
* @owner: ss
*
* Description: just a lone dog struct
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
