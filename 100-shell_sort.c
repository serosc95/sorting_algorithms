#include"sort.h"
/**
 * shell_sort - sorts an array using shell sort (Knuth sequence)
 * @array: array to order.
 * @size: array size.
 */
void shell_sort(int *array, size_t size)
{
	int aux, new_size = size;
	int i, j, range = 1;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < new_size; i = ((i * 3) + 1))
		range = i;
	while (range >= 1)
	{
		for (i = 0; i + range < new_size; i++)
		{
			if (array[i] > array[i + range])
			{
				aux = array[i + range];
				array[i + range] = array[i];
				array[i] = aux;
				for (j = i; j - range >= 0; j--)
				{
					if (array[j - range] > array[j])
					{
						aux = array[j - range];
						array[j - range] = array[j];
						array[j] = aux;
					}
				}
			}
		}
		print_array(array, size);
		range = (range - 1) / 3;
	}
}
