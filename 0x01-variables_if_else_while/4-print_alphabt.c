#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
