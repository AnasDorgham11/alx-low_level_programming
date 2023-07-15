#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * description - a to z except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			break;
		}
		else
		{
			putchar(i);
		}
	}
		putchar('\n');
		return (0);
}
