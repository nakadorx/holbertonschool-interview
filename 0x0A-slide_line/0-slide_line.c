#include "slide_line.h"

/**
 * derc - holb
 * @line: int
 * @size: int
 * @direction: int
 *
 * Return: 0
 */

void derc(int *line, size_t size, int direction)
{
	int r, l;

	if (direction == SLIDE_LEFT)
	{
		for (r = 0; r < (int)size - 1; r++)
		{
			for (l = r + 1; l < (int)size; l++)
			{
				if (line[l] != 0 && line[r] == 0)
				{
					line[r] = line[l];
					line[l] = 0;
				}
			}
		}
	}
	if (direction == SLIDE_RIGHT)
	{
		for (r = (int)size - 1; r >= 0; r--)
		{
			for (l = r - 1; l >= 0; l--)
			{
				if (line[l] != 0 && line[r] == 0)
				{
					line[r] = line[l];
					line[l] = 0;
				}
			}
		}
	}
}


/**
 * combine - holb
 * @line: int
 * @size: int
 * @direction: int
 *
 * Return: 0
 */

void combine(int *line, size_t size, int direction)
{
	int i;

	if (direction == SLIDE_LEFT)
	{
		for (i = 0; i < (int)size - 1; i++)
		{
			if (line[i] == line[i + 1])
			{
				line[i] = line[i] * 2;
				line[i + 1] = 0;
			}
		}
	}
	if (direction == SLIDE_RIGHT)
	{
		for (i = (int)size - 1; i >= 0; i--)
		{
			if (line[i] == line[i - 1])
			{
				line[i] = line[i] * 2;
				line[i - 1] = 0;
			}
		}
	}
}


/**
 * slide_line - holb
 * @line: int
 * @size: int
 * @direction: int
 *
 * Return: 0
 */

int slide_line(int *line, size_t size, int direction)
{

	if (!line)
		return (0);

	if (direction != SLIDE_RIGHT && direction != SLIDE_LEFT)
		return (0);
	derc(line, size, direction);
	combine(line, size, direction);
	derc(line, size, direction);

	return (1);
}
