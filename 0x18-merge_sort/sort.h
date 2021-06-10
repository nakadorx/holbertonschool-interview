#ifndef HEAD
#define HEAD

#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size);


/**
 * merge_sort - Sort an array of integers using the merge sort algorithm.
 *
 * @array: pointer to the first element of the array.
 * @size: the number of elements in the given array.
 */
void merge_sort(int *array, size_t size);

#endif
