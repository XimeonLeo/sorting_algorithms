#include "sort.h"

/**
 * quick_sort - sort an array using the quick sort
 * method... partition and swapping
 *
 * @array: an array of integers
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	sort_it(array, 0, size - 1, size);
}

/**
 * sort_it - sorts out the array
 *
 * @array: array to sort
 * @begin: the zeroth index
 * @end: the nth index
 * @size: size of the array
 */
void sort_it(int *array, int begin, int end, int size)
{
	int pivotIndex;

	if (begin < end)
	{
		pivotIndex = partition(array, begin, end, size);
		sort_it(array, begin, pivotIndex - 1, size);
		sort_it(array, pivotIndex + 1, end, size);
	}
}

/**
 * partition - devides the array into sub
 *
 * @array: the array
 * @low: the lower boundary
 * @high: the upper boundary
 * @size: the size of the array
 *
 * Return: the partition index
 */
int partition(int *array, int low, int high, int size)
{
	int pivot = array[low], start = low, end = high;

	while (start < end)
	{
		while (array[start] <= pivot)
			start++;
		while (array[end] >= pivot)
			end--;
		if (start < end)
		{
			swap(&array[start], &array[end]);
			print_array(array, size);
		}
	}
	print_array(array, size);
	swap(&array[low], &array[end]);

	return (end);
}

/**
 * swap - swaps the value in the array
 *
 * @x: the first position
 * @y: the second position
 */
void swap(int *x, int *y)
{
	int tmp = *x;

	*x = *y;
	*y = tmp;
}
