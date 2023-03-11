#include "stdio.h"

/**
  *main - Write a program that prints all arguments it receives.
  *@argc: counts the number of arguments in the function
  *@argv: counts the number of characters in the array
  *
  *Return: always 0 success
  *
  */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
