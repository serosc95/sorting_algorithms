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

	if (size < 2)
		return;
	while (sorted < size - 1)
	{
		sorted = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
			}
			else
				sorted++;
		}
	}
}
