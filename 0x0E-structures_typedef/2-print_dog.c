#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: a struct type
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\", (d->name == NULL || d->name[0] == '\0') ? "(nil)" : d->name);
		printf("Age: ");
		(d->age == 0) ? printf("(nil)\n") : printf("%f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
