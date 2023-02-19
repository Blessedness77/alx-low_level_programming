#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int ansi_numbers_lowercase;
	int ansi_numbers_uppercase;

	ansi_numbers_lowercase = 'a';
	ansi_numbers_uppercase = 'A';

	while (ansi_numbers_lowercase < '{')
	{
		putchar(ansi_numbers_lowercase);
		ansi_numbers_lowercase++;
	}

	while (ansi_numbers_uppercase < '[')
	{
		putchar(ansi_numbers_uppercase);
		ansi_numbers_uppercase++;
	}

	putchar('\n');
	return (0);
}
