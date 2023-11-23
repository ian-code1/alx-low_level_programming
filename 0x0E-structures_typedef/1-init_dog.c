#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the new dog struct whose variable is initialized
 * @d: pointer to the struct
 * @name: name if the new dog
 * @owner: the owner of the new dog
 * @age: the age of the w dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
	return;
d->name = name;
d->age = age;
d->owner = owner;
}
