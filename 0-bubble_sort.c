#include "sort.h"

/**
 * bubble_sort - Sort elemnts in an array
 * @array: Array
 * @size: Size of array
 * Return: 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

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

/**
 * swap - to swap values
 * @vl_one: Fisrt value
 * @vl_two: Second value
 * Return: 0
 */
void swap(int *vl_one, int *vl_two)
{
	int temp;

	temp = *vl_two;
	*vl_two = *vl_one;
	*vl_one = temp;
}
