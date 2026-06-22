# Heap Insert

> **Holberton School — Interview Prep**
> *By Alexa Orrico, Software Engineer at Holberton School*

---

## Description

Implementation in C of a **Max Binary Heap** with insertion. A Max Binary Heap is a complete binary tree where each node's value is greater than or equal to its children's values.

---

## Data Structures

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s heap_t;
```

---

## Functions

### Task 0 — New node

```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

Creates a new binary tree node with the given `value` and `parent`. Returns a pointer to the new node, or `NULL` on failure.

---

## Usage

Compile with the provided `main.c` and the print helper:

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
./0-node
```


---

## Requirements

- Language: **C**
- Compiler: `gcc 4.8.4` on Ubuntu 14.04 LTS
- Flags: `-Wall -Werror -Wextra -pedantic`
- Style: [Betty](https://github.com/hs-hq/Betty)
- No global variables
- No more than 5 functions per file
- All header files must be include-guarded

---

## Author

**Haris Hammache**