#include "sort.h"

/**
 * selection_sort - sorts in ascending order using Selection sort algorithm
 * @array: array to sort
 * @size: size of the array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
size_t i = 0;
size_t j, low;
int actual = 0;

if (!array || size < 2)
return;
while (i < size)
{
    low = i;
    j = 1 + i;
    while (j < size)
    {
        if(array[j] < array[low])
            low = j;
        j++;
    }
    if (i != low)
    {
        actual = array[i];
        array[i] = array[low];
        array[low] = actual;
        print_array(array, size);
    }
    i++;
}
}