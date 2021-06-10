#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* funcseo - holb
*
* @tab: int
* @beg: int
* @f: int
* @end: int
* @tabb: int
*/
void funcseo(int *tab, int beg, int f, int end, int *tabb)
{
	int ok;
	int i = beg;
	int j = f;

	for (ok = beg; ok < end; ok++)
	{
		if (i < f && (j >= end || (tab[i] <= tab[j])))
		{
			tabb[ok] = tab[i];
			i += 1;
		}
		else
		{
			tabb[ok] = tab[j];
			j += 1;
		}
	}
	for (ok = beg; ok < end; ok++)
		tab[ok] = tabb[ok];
}

/**
* defffun - holb.
*
* @tab: int
* @a: int
* @b: int
* @backup: int
*/
void defffun(int *tab, int a, int b, int *backup)
{
	int f, i;

	if (b - a <= 1)
		return;
	f = (a + b) / 2;
	defffun(tab, a, f, backup);
	defffun(tab, f, b, backup);

	printf("Merging...\n");
	printf("[left]: ");
	for (i = a; i < f; i++)
	{
		printf("%d", backup[i]);
		if (i + 1 < f)
			printf(", ");
	}
	printf("\n");
	printf("[right]: ");
	for (i = f; i < b; i++)
	{
		printf("%d", backup[i]);
		if (i + 1 < b)
			printf(", ");
	}
	printf("\n");

	funcseo(tab, a, f, b, backup);

	printf("[Done]: ");
	for (i = a; i < b; i++)
	{
		printf("%d", backup[i]);
		if (i + 1 < b)
			printf(", ");
	}
	printf("\n");
}

/**
* merge_sort - holb
*
* @array: int
* @size: int
*/
void merge_sort(int *array, size_t size)
{
	int d, i, *point;

	if (size <= 1)
		return;
	d = size;
	point = (int *) malloc(size * sizeof(int));
	for (i = 0; i < d; i++)
		point[i] = array[i];
	defffun(point, 0, d, array);
	free(point);
}
