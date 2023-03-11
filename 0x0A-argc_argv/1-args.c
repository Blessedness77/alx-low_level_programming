#include "stdio.h"

/**
  *main - Write a program that prints the number of arguments passed into it
  *@argc: counts the number of parameters passed into the function
  *@argv: counts the arrays
  *
  *Return: 0 always success
  */
int main(int argc, char *argv[])
{
(void) argv;

printf("%d\n", argc -1);
return (0);
}
