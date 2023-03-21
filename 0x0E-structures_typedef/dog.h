#ifndef DOG_H
#define DOG_H

/**
  * struct dog - definition of dog with some basic elements
  * @name: name of the dog
  * @age: the age of the dog
  * @owner: who owns the dog
  *
  * Description: This is to give a brief description of the dog (struct dog)
  */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
