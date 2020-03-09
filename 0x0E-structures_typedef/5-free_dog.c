#include "dog.h"
#include <stdlib.h>
/**
*free_dog - a function to free a struct
*@d : a pointer
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free((*newer).name);
free((*newer).owner);
free(d);
}
