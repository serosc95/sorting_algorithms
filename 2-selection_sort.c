#include"sort.h"
/**
 * selection_sort - sorts an array using selection sort
 * @array: array to order.
 * @size: array size.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int aux;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (min = i, j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			aux = array[min];
			array[min] = array[i];
			array[i] = aux;
			print_array(array, size);
		}
	}
}
