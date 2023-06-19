#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure tag
 * @name: struct member for the dog's name
 * @age: struct member for the dog's age
 * @owner: struct member for the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *d);
#endif
