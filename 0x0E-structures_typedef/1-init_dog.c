#include "dog.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: arg 1
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		exit (EXIT_SUCCESS);
}
