#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * description - a to z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char a;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
		putchar('\n');
		return (0);
}
