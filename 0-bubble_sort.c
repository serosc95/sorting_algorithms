#include"sort.h"
/**
 * bubble_sort - sorts an array using Bubble sort
 * @array: array to order.
 * @size: array size.
 */
void bubble_sort(int *array, size_t size)
{
	int aux, sorted = 1;
	size_t i;

	if (array == NULL || size < 2)
		return;
	while (sorted)
	{
		for (sorted = 0, i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
				sorted = 1;
			}
		}
	}
}
