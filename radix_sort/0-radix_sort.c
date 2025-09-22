#include "sort.h"
/**
 * get_max - function that sorts an array of integers in ascending order
 *
 * @array: contain only numbers >= 0
 * @size: size of the array
 *
 * Return: the value max on the array
 */
static int get_max(int *array, size_t size)
{
	size_t index;
	int max = array[0];

	for (index = 0; index < size; index++)
	{
		if (array[index] > max)
			max = array[index];
	}
	return (max);
}

/**
 * counting_sort - function that sorts an array of integers in ascending order
 *
 * @array: contain only numbers >= 0
 * @size: size of the array
 * @exp: exp of the array
 *
 * Return Nothing
 */
static void counting_sort(int *array, size_t size, int exp)
{
	int *output = malloc(sizeof(int) * size);
	int count[10] = {0};

	if (!output)
		return;

	for (size_t i = 0; i < size; i++)
		count[(array[i] / exp) % 10]++;

	for (int i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (ssize_t i = size - 1; i >= 0; i--)
	{
		output[count[(array[i] / exp) % 10] - 1] = array[i];
		count[(array[i] / exp) % 10]--;
	}

	for (size_t i = 0; i < size; i++)
		array[i] = output[i];

	print_array(array, size);
	free(output);
}

/**
 * radix_sort - function that sorts an array of integers
 *
 * @array: array will contain only numbers >= 0
 * @size: size of the array
 *
 * Return nothing
 */
void radix_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	int max = get_max(array, size);

	for (int exp = 1; max / exp > 0; exp *= 10)
		counting_sort(array, size, exp);
}

