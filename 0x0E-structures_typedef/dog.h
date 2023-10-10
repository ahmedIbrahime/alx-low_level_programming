#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - a dog struct
 *@name: dog's name
 *@age: dog's age
 *@owner: owner's name
 *
 *description: just a lone dog stract in a big world
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
