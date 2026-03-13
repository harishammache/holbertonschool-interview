# Merge Sort Implementation

> A C implementation of the Merge Sort algorithm (top-down approach) for Holberton School interview project.

## Description

This project implements the **Merge Sort** algorithm, one of the most efficient sorting algorithms. It demonstrates efficient sorting with a divide-and-conquer approach.

### Key Features

- **Top-down merge sort** implementation in C
- **Efficient space allocation** - Uses only one malloc/free call
- **Visual output** - Displays merging operations during sorting
- **Betty style compliant** - Follows Holberton School coding standards
- **Well-documented** - Clear prototypes and documentation

## Algorithm Overview

Merge Sort works by:

1. **Divide**: Split the array into two halves recursively
   - Left subarray size ≤ Right subarray size
2. **Sort**: Recursively sort both halves
   - Process left array before right array
3. **Merge**: Combine two sorted arrays into one sorted array

### Example

```
Input:  [19, 48, 99, 71, 13, 52, 96, 73, 86, 7]
Output: [7, 13, 19, 48, 52, 71, 73, 86, 96, 99]
```

## Complexity Analysis

| Metric | Complexity |
|--------|-----------|
| **Best Case** | O(n log n) |
| **Average Case** | O(n log n) |
| **Worst Case** | O(n log n) |
| **Space Complexity** | O(n) |

## File Structure

```
merge_sort/
├── 0-merge_sort.c    # Main merge sort implementation
├── sort.h            # Function prototypes and declarations
├── 0-O              # Big O complexity file
├── print_array.c     # Utility function to print arrays (provided)
└── README.md        # This file
```

## Requirements

### System
- **OS**: Ubuntu 14.04 LTS
- **Compiler**: GCC 4.8.4
- **Flags**: `-Wall -Wextra -Werror -pedantic`

### Code Standards
- Betty style compliance (checked with betty-style.pl and betty-doc.pl)
- No global variables
- Maximum 5 functions per file
- No standard library functions (printf allowed for this project)
- All functions declared in header file with include guards
- All files end with newline

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-merge_sort.c print_array.c -o merge
```

## Usage

### Basic Example

```c
#include "sort.h"

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    merge_sort(array, n);
    print_array(array, n);
    return (0);
}
```

### Output Example

```
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

Merging...
[left]: 19
[right]: 48
[Done]: 19, 48
...
[Done]: 7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

## Function Prototype

```c
/**
 * merge_sort - Sorts an array of integers using Merge Sort
 * @array: Pointer to the array
 * @size: Number of elements in the array
 *
 * Description: Implements top-down merge sort algorithm.
 * Left subarray size is always <= right subarray size.
 * Prints array state during merging operations.
 */
void merge_sort(int *array, size_t size);
```

## Key Implementation Details

✅ **Top-down approach** - Recursively divides array  
✅ **Balanced splitting** - Left array size ≤ right array size  
✅ **Left-first sorting** - Left array sorted before right  
✅ **Single malloc** - Memory allocated only once during execution  
✅ **Merge visualization** - Prints operations during merging  

## Time Complexity

Merge sort guarantees **O(n log n)** complexity in all cases:
- Each level of recursion processes all n elements: O(n)
- There are log(n) levels of recursion
- Total: n × log(n) = **O(n log n)**

This makes it one of the most reliable sorting algorithms for large datasets.

## Space Complexity

- **O(n)** additional space required for temporary arrays during merging
- Efficient implementation with single memory allocation

## Author

*Holberton School Interview Project*

## Notes

- Arrays with size < 2 don't need sorting
- The `print_array` function prototype must be declared in sort.h
- All header files must include guards
- No use of global variables allowed

---

**Project Status**: ✅ Implementation Ready
