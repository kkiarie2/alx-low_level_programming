#include "dog.h"
#include <stdlib.h>

/**
* new_dog - entry point
* @name: name of pet
* @age: age of pet
* @owner: owner of pet
* Return: p
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
/*mem for struct */
p = malloc(sizeof(dog_t));
if (p == NULL)
return (NULL);
/* name  */
if (name == NULL)
{
free(p);
free(owner);
return (NULL);
}
if (owner == NULL)
{
free(p);
free(name);
return (NULL);
}
p->name = name;
p->age = age;
p->owner = owner;
return (p);
}
