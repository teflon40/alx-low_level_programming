#include "dog.h"

/**
 * init_dog - initializes a variable of type struct
 * @d: pointer to a struct variable
 * @name: pointer to struct member
 * @age: a struct member
 * @owner: pointer to a struct member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;

	(age == NULL) ? d->age = 0 : d->age = age;
	d->owner = owner;
}
