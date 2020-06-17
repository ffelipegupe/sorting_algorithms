include "sort.h"

/**
 * shell_sort - sorts using the Shell sort algorithm/Knuth sequence
 * @array: array to sort
 * @size: size of the array
 *
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
        size_t gap = 1, i, j;
        int tmp;

        if (!array || size < 2)
                return;
        while (gap < size)
                gap = (gap * 3) + 1
        gap = (gap - 1) / 3
        while (gap > 0)
        {
                i = gap;
                while (i < size)
                {
                        tmp = array[i];
                        for (j = i; j >= gap && array[j - gap] > tmp; j -=gap)
                             array[j] = array[j - gap]
                        array[j] = tmp;
                        i++;
                }
                print_array(array, size);
                gap = (gap - 1) / 3;
        }
}