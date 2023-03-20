#include <stdio.h>
#include "dog.h"
/**
 * init_dog- initializes  variable type struct dog
 * @d: pointer to be initialized
 * @name: name to be initialized
 * @age: age to be initialized
 * @owner: owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
