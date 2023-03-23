#include <stdio.h>
#include <stdlib.h>

/**
  * array_iterator - this function executes other functions
  * @array: this points to the first element of the arrray
  * @size: This describes the size of the array
  * @action: this is the function executed to give the element of the array
  *
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i <= size - 1; i++)
{
(*action)(array[i]);
}
}
