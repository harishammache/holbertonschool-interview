#include <stdio.h>
#include <stdbool.h>
/**
 * print_grid - Print a 3x3 grid
 * @grid: 3x3 grid to print
 * Return: Nothing
 */
static void print_grid(int grid[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * is_stable - Checks if a 3x3 sandpile is stable
 * @grid: The 3x3 sandpile to check
 * Return: True or False
 */
static bool is_stable(int grid[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
				return (false);
		}
	}
	return (true);
}

/**
 * topple - Performs a toppling step on a 3x3 sandpile
 * @grid: The 3x3 sandpile to stabilize
 * Return: Nothing
 */
static void topple(int grid[3][3])
{
	int grid_tmp[3][3] = {0};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
			{
				grid_tmp[i][j] -= 4;
				if (i > 0)
					grid_tmp[i - 1][j] += 1;
				if (i < 2)
					grid_tmp[i + 1][j] += 1;
				if (j > 0)
					grid_tmp[i][j - 1] += 1;
				if (j < 2)
					grid_tmp[i][j + 1] += 1;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			grid[i][j] += grid_tmp[i][j];
	}
}


/**
 * sandpiles_sum - calculate the sum of two piles of sand
 * @grid1: first grid
 * @grid2: second grid
 * Return: Nothing
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			grid1[i][j] += grid2[i][j];
	}

	while (!is_stable(grid1))
	{
		printf("=\n");
		print_grid(grid1);
		topple(grid1);
	}
}
