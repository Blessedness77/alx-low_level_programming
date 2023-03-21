#include "dog.h"

/**
  * init_dog - this function initializes a variable type
  * @d: variable to initialize
  * @name: the name of the variable in this case dog
  * @age: the age of the variable
  * @owner: the custodian of the variable
  *
  * Return: void ()
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if(!(d == 0))
    {
        (*d).name = name;
        (*d).age = age;
        (*d).owner = owner;
    }
}
