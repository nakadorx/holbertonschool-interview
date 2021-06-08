#include "search_algos.h"

/**
 * print_array - holb
 * @array: int
 * @min: int
 * @max: int
 *
 * Return: 0
 */
void print_array(int *array, int min, int max)
{
	int i;

	for (i = min; i < max; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}
/**
 * BinarySearch - holb
 * @array: int
 * @min: int
 * @max: int
 * @value: int
 *
 * Return:0
 */
int BinarySearch(int *array, int min, int max, int value)
{
	int mid;

	if (min > max)
		return (-1);

	printf("Searching in array: ");
	print_array(array, min, max);

	if (min == max && array[max] == value)
		return (max);

	if (min == max && array[max] != value)
		return (-1);

	mid = min + (max - min) / 2;

	if ((mid == min || value != array[mid - 1]) && array[mid] == value)
		return (mid);

	if (array[mid] >= value)
		return (BinarySearch(array, min, mid, value));
	return (BinarySearch(array, mid + 1, max, value));
}
/**
 * advanced_binary - holb
 * @array: int
 * @size: int
 * @value: int
 *
 * Return: 0
 */
int advanced_binary(int *array, size_t size, int value)
{

	if (!array || size == 0)
		return (-1);

	return (BinarySearch(array, 0, size - 1, value));
}
