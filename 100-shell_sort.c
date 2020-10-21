#include"sort.h"
/**
 * shell_sort - sorts an array using shell sort (Knuth sequence)
 * @array: array to order.
 * @size: array size.
 */
void shell_sort(int *array, size_t size)
{
	int aux, new_size = size;
	int i, j, range = new_size / 2;

	while (range > 1)
	{
		for (i = 0; i + range - 1 < new_size; i++)
		{
			if (array[i] > array[i + range - 1])
			{
				aux = array[i + range - 1];
				array[i + range - 1] = array[i];
				array[i] = aux;
				for (j = i; j - range + 1 >= 0; j--)
				{
					if (array[j - range + 1] > array[j])
					{
						aux = array[j - range + 1];
						array[j - range + 1] = array[j];
						array[j] = aux;
					}
				}
			}
		}
		print_array(array, size);
		range = range / 2;
	}
}
