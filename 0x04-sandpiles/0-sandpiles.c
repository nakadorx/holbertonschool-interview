#include "sandpiles.h"
/**
* verification - holberton
* @a: int
* Return: 0
**/
bool verification(int a[3][3])
{
	int x, b;
	for (x = 0; x < 3; x++)
	{
		for (b = 0; b < 3; b++)
		{
			if (a[x][b] > 3)
			{
				return (false);
			}
		}
	}
	return (true);
}
/**
* print - holberto,
* @a: int
* Return: 0
**/
void print(int a[3][3])
{
	int x, b; 
	printf("=\n");
	for (x = 0; x < 3; x++)
	{
		for (b = 0; b < 3; b++)
		{
			printf("%d", a[x][b]);
			if (b < 2)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
/**
* sum - holberton
* @a: int
* @b: int
* Return: 0
**/
void sum(int a[3][3], int b[3][3])
{
	int x, k;
	for (x = 0; x < 3; x++)
	{
		for (k = 0; k < 3; k++)
			a[x][k] += b[x][k];
	}
}
/**
* stable - holberton
* @a: int
* @tmp: int
* Return: 0
**/
void stable(int a[3][3], int tmp[3][3])
{
	int x, b;
	for (x = 0; x < 3; x++)
	{
		for (b = 0; b < 3; b++)
		{
			tmp[x][b] = a[x][b];
		}
	}
	for (x = 0; x < 3; x++)
	{
		for (b = 0; b < 3; b++)
		{
			if (tmp[x][b] >= 4)
			{
				a[x][b] = a[x][b] - 4;
				if (x >= 1)
					a[x - 1][b] += 1;
				if (x <= 1)
					a[x + 1][b] += 1;
				if (b >= 1)
					a[x][b - 1] += 1;
				if (b <= 1)
					a[x][b + 1] += 1;
			}
		}
	}
}
/**
* sandpiles_sum - holberton
* @grid1: int
* @grid2: int
* Return: 0
**/
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int x[3][3];

	sum(grid1, grid2);
	while (!verification(grid1))
	{
		print(grid1);
		stable(grid1, x);
	}
}
