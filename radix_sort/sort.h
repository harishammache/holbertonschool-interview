#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>

void radix_sort(int *array, size_t size);
void print_array(const int *array, size_t size);

#endif
