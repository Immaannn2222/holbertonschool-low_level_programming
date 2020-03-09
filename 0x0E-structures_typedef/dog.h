#ifndef _DOG_H_
#define _DOG_H_
/**
*struct dog - a struct
*@name : the name
*@age : age of the dog
*@owner : who's his owner
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
*struct dog_t- a similar one to previously done
*@name : its name
*@age : age of the dog
*@owner : who's his owner
*/
typedef struct dog_t
{
char *name;
float age;
char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
