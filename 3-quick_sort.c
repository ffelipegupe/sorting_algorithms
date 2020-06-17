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
 * partition - function that makes a partiton of an array
 * @array: pointer to the array
 * @low: lower element
 * @high: higher element
 * @size: size of the array
 *
 * Return: the number
 */
int partition(int *array, int low, int high, size_t size)
{
	int j;
	int pivot = array[high];
	int a = (low - 1);

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			a++;
			swapper(&array[a], &array[j]);
			print_array(array, size);
		}
	}
	swapper(&array[a + 1], &array[high]);
	print_array(array, size);
	return (a + 1);
}

/**
 * quick_helper - function to take low and high arguments
 * @array: array to sort
 * @size: size of the array
 * @low: lowest
 * @high: highest
 *
 * Return: nothing
 */

void quick_helper(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pa = partition(array, low, high, size);

		quick_helper(array, low, pa - 1, size);
		quick_helper(array, pa + 1, high, size);
	}
}
/**
 * quick_sort - sorts an array of integers using the Quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array || size < 2)
		return;
	quick_helper(array, low, high, size);
}
