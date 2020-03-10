#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory
*@str : a char
*
*Return: null
*/
char *_strdup(char *str)
{
char *s;
unsigned int i = 0, j = 0;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
s = malloc((i + 1) * sizeof(char));
if (s == NULL)
return (NULL);
for (j = 0; j <= i; j++)
{
s[j] = str[j];
}
return (s);
}

/**
*new_dog - a function that creates a new file
*@name:its name
*@age:its age
*@owner:its owner's name
*Return: newer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newer;
newer = malloc(sizeof(struct dog));
if (newer == NULL)
{
free(newer);
return (NULL);
}
(*newer).name = _strdup(name);
if ((*newer).name == NULL)
{
free(newer);
return (NULL);
}
(*newer).owner = _strdup(owner);
if ((*newer).owner == NULL)
{
free(newer);
free((*newer).name);
return (NULL);
}
(*newer).age = age;
return (newer);
}
