#include "dog.h"
/**
*init_dog - dog file for a dog
*@d : mm
*@name : its name
*@age : its age
*@owner : its owner
*Return :
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
{
return;
}
else
{
struct dog;
d->name = name;
d->age = age;
d->owner = owner;
}
}
