#include "sort.h"

/**
 * bubble_sort - sort an array using bubble sort teq
 * @array: array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	int flag = 0;

	for (size_t i = 0; i < size - 1; i++)
	{
		flag = 0;

		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
