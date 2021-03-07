#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "menger.h"

/**
 * menger - Holbertonscholl
 *
 * @level: int
 *
 * Return: 0
 */
void menger(int level)
{
	int i, j, a, b;
	char ch;

	if (level < 0)
		return;
	for (i = 0; i < pow(3, level); i++)
	{
		for (j = 0; j < pow(3, level);)
		{
			ch = '#';
			a = i;
			b = j++;
			while (a > 0 || b > 0)
			{
				if (a % 3 == 1 && b % 3 == 1)
					ch = ' ';
				a /= 3;
				b /= 3;
			}
			putchar(ch);
		}
		printf("\n");
	}
}
