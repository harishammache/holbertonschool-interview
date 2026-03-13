#include "sort.h"

/**
 * merge - Merges two sorted subarrays
 * @array: The original array
 * @left: Start index of left subarray
 * @mid: End index of left subarray
 * @right: End index of right subarray
 * @temp: Temporary array for merging
 */
void merge(int *array, int left, int mid, int right, int *temp)
{
	int i = left;
	int j = mid + 1;
	int k = left;

	printf("Merging...\n");

	while (i <= mid && j <= right)
	{
		if (array[i] <= array[j])
			temp[k++] = array[i++];
		else
			temp[k++] = array[j++];
	}

	while (i <= mid)
		temp[k++] = array[i++];

	while (j <= right)
		temp[k++] = array[j++];

	printf("[left]: ");
	print_array(array + left, mid - left + 1);
	printf("[right]: ");
	print_array(array + mid + 1, right - mid);
	printf("[Done]: ");
	print_array(temp + left, right - left + 1);

	for (i = left; i <= right; i++)
		array[i] = temp[i];
}

/**
 * merge_sort_recursive - Recursively divides and sorts array
 * @array: The array to sort
 * @left: Start index
 * @right: End index
 * @temp: Temporary array for merging
 */
void merge_sort_recursive(int *array, int left, int right, int *temp)
{
	if (left < right)
	{
		int mid = left + (right - left - 1) / 2;

		merge_sort_recursive(array, left, mid, temp);
		merge_sort_recursive(array, mid + 1, right, temp);
		merge(array, left, mid, right, temp);
	}
}

/**
 * merge_sort - Sorts an array of integers using Merge Sort algorithm
 * @array: The array to sort
 * @size: Number of elements in the array
 *
 * Description: Implements top-down merge sort algorithm.
 * Uses single malloc allocation for temporary array.
 */
void merge_sort(int *array, size_t size)
{
	int *temp;

	if (array == NULL || size < 2)
		return;

	temp = malloc(sizeof(int) * size);
	if (temp == NULL)
		return;

	merge_sort_recursive(array, 0, size - 1, temp);

	free(temp);
}
