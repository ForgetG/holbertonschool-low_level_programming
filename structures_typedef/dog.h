#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - define dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: name of owner.
 */

struct dog
{
	char	*name;
	float	age;
	char	*owner;
};

typedef struct dog dog_t;



void	init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);
void	free_dog(dog_t *d);
dog_t	*new_dog(char *name, float age, char *owner);

#endif
