#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ansi_number;

	ansi_number = 'a';
	while (ansi_number < '{')
	{
		putchar(ansi_number);
		ansi_number++;
	}
	putchar('\n');
	return (0);
}
