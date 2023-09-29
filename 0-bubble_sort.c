#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 *				order using the Bubble sort algorithm
 * @array: array of int
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int flag;
	int tmp;

	flag = 1;
	if (!array || size < 2)
		return;
	while (flag)
	{
		flag = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				flag = 1;
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array((const int *)array, size);
				break;
			}
		}
	}
}
