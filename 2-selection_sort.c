#include "sort.h"

/**
 * selection_sort - Function that sorts an array using selection sort
 * @array: Array to be sorted
 * @size: Size of array given
 * Return: 0
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap(array + i, min);
			print_array(array, size);
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
