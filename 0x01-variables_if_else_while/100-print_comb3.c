#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * description - comb
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
		int i, j, comma = 44, b_space = 32;

		for (i = 48; i <= 57; i++)
		{
		   for (j = i+1; j <= 57; j++)
		   {
				putchar(i);
				putchar(j);
					if (i == 56 && j == 57)
					{
						break;
					}
					else
						{
							putchar(comma);
							putchar(b_space);
						}   
			}
		}
	putchar('\n');
	return (0);
}

