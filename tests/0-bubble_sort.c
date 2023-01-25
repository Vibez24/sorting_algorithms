#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: sort array.
 * @size: size of array.
 * Return: Void function.
 */

void bubble_sort(int *array, size_t size)
{
	size_t tmp;
	size_t traverse;
	size_t j;

	if (array == NULL || size < 2)
	{
		return;
	}
	/*Loop then move element to right position */
	/*Traverse*/

	sizeOfArray = size - 1;
	for (j = 0; j < sizeOfArray; j++)
	{
		/*check greater element presiding previous index*/
		if (array[j] > array[j + 1])
		{
			tmp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = tmp;
			print_array(array, size);
		}
	}
}
