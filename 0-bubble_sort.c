#include "sort.h"

/**
 * bubble_sort - Sort elemnts in an array
 * @array: Array
 * @size: Size of array
 * Return: 0
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
