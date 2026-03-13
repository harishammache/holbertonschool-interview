#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: Array
 * @size: Number of elements
 */
void print_array(const int *array, size_t size);

/**
 * merge_sort - Sorts an array of integers using Merge Sort algorithm
 *
 * @array: The array to sort
 * @size: Number of elements in the array
 */
void merge_sort(int *array, size_t size);

#endif
