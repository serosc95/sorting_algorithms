#include"sort.h"
/**
 * counting_sort - sorts an array using counting sort
 * @array: array to order.
 * @size: array size.
 */
void counting_sort(int *array, size_t size)
{
	int *array_empty, *array_new;
	int i, max, new_size = size;

	if (array == NULL || size < 2)
		return;
	for (max = array[0], i = 0; i < new_size; i++)
	{
		if (max < array[i])
			max = array[i];
	}
	array_empty = malloc(sizeof(int) * (max + 1));
	if (!array_empty)
		return;
	for (i = 0; i < max + 1; i++)
		array_empty[i] = 0;
	for (i = 0; i < new_size; i++)
		array_empty[array[i]] += 1;
	for (i = 1; i < max + 1; i++)
		array_empty[i] += array_empty[i - 1];
	print_array(array_empty, max + 1);
	array_new = malloc(sizeof(int) * size);
	if (!array_new)
		return;
	for (i = 0; i < new_size; i++)
	{
		array_new[array_empty[array[i]] - 1] = array[i];
		array_empty[array[i]] -= 1;
	}
	for (i = 0; i < new_size; i++)
		array[i] = array_new[i];
	free(array_empty);
	free(array_new);
}
