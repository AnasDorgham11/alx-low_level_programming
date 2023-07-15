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
	char comma = 44
	char b_space = 32 

	for (i = 48; i <= 57; i++)
	{
		if (i < 57)
		{		
			putchar(i);
			putchar(comma);
			putchar(b_space);
		}
		else
		{
			putchar(i);
		}
	}
		putchar('\n');
		return (0);
}
