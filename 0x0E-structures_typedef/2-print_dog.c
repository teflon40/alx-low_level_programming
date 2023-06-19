#include "dog.h"
#include <stdio.h>

/* print_dog - prints a struct dog
 * @d: a struct type
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: ");
	(d->name == 0) ? printf("(nil)\n") : printf("%f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
