#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * description - 0 to 9 with ", "
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, comma = 44, b_space = 32;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{	
			putchar(comma);
			putchar(b_space);
		}
		else
		{
			break;
		}
	}
		putchar('\n');
		return (0);
}
