#include"sort.h"
/**
 * bubble_sort - sorts an array using Bubble sort
 * @array: array to order.
 * @size: array size.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, sorted = 0;
	int aux;

	if (array == NULL || size < 2)
		return;
	while (sorted < size - 1)
	{
		for (sorted = 0, i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
			}
			else
				sorted++;
		}
	}
}
