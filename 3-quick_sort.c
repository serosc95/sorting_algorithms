#include"sort.h"
/**
 * quick_sort - sorts an array using quick sort
 * @array: array to order.
 * @size: array size.
 */
void quick_sort(int *array, size_t size)
{
	size_t pos_pivot;

	if (array == NULL || size < 2)
		return;
	sort_all_parts(array, size, 0, size - 1);
}

/**
 * sort_all_parts - sorts an array all partitions using quick sort.
 * @array: array to order.
 * @size: array size.
 * @min: init index array.
 * @p_pivot: position of pivot.
 */
void sort_all_parts(int *array, size_t size, size_t min, size_t p_pivot)
{
	size_t pivot;

	if (min < p_pivot + 1)
	{
		pivot = sort_partition(array, size, min, p_pivot);
		sort_all_parts(array, size, min, pivot - 1);
		sort_all_parts(array, size, pivot + 1, p_pivot);
	}
}

/**
 * sort_partition - sorts an array partition using quick sort.
 * @array: array to order.
 * @size: array size.
 * @min: init index array.
 * @max: position of pivot.
 * Return: index of pivot.
 */
size_t sort_partition(int *array, size_t size, size_t min, size_t max)
{
	int pivot, aux;
	size_t i, j;

	pivot = array[max];
	j = min;
	i = min;
	printf("swap %d\n", pivot);
	while (j < max)
	{
		if (pivot < array[i])
		{
			j++;
			if (pivot >= array[j])
			{
				aux = array[j];
				array[j] = array[i];
				array[i] = aux;
				print_array(array, size);
				if (j != max)
					i++;
			}
		}
		else
		{
			j++;
			i++;
		}
	}
	return (i);
}
