#include "sort.h"

/**
 * swapper - function that swaps array elements
 * @a: pointer to element to swap
 * @b: pointer to element to swap
 *
 * Return: nothing
 */

void swapper(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - sorts an array of integers using the Bubble sort algorithm
 * @array: array to sort
 * @size: size
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int check;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		check = 1;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapper(&array[j], &array[j + 1]);
				check = 0;
				print_array(array, size);
			}
		}
		if (check == 1)
			break;
	}
}
