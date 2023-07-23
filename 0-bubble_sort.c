#include "sort.h"

/**
 * bubble_sort - sorts out an array using bubble sort
 * in ascenfing order
 *
 * @array: the unsorted array
 * @size: size of the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t first, index, swap, tmp;

	if (array != NULL)
	{
		for (first = 0; first < size - 1; first++)
		{
			swap = 0;
			for (index = 0; index < size - 1 - first; index++)
			{
				if (array[index] > array[index + 1])
				{
					tmp = array[index];
					array[index] = array[index + 1];
					array[index + 1] = tmp;
					print_array(array, size);
					swap = 1;
				}
			}
			if (swap == 0) /* if there were no swaps */
				print_array(array, size);
		}
	}
}
