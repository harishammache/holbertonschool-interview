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
 * sandpiles_sum - calculate the sum of two piles of sand
 * @grid1: first grid
 * @grid2: second grid
 * Return: Nothing
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j;
	bool stable = false;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			grid1[i][j] += grid2[i][j];
	}

	while (!stable)
	{
		stable = true;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (grid1[i][j] > 3)
				{
					printf("=\n");
					print_grid(grid1);

					grid1[i][j] -= 4;
					if (i < 2)
						grid1[i + 1][j]++;
					if (i > 0)
						grid1[i - 1][j]++;
					if (j < 2)
						grid1[i][j + 1]++;
					if (j > 0)
						grid1[i][j - 1]++;
					stable = false;
				}
			}
		}
	}
}

