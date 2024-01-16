#include <stdio.h>
#include "sort.h"

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
