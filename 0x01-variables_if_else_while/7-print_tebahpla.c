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
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
		putchar('\n');
		return (0);
}
