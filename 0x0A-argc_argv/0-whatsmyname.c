#include "stdio.h"

/**
  *main - write a function that prints its name and a new line
  *@argc: counts the number of arguments
  *@argv: counts the number of arrays of the arguments
  *
  *Return: always 0 success
  */

int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);
return (0);
}
