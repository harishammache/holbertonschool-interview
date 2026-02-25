#include "menger.h"

/**
 * is_blank - Vérifie si la case (row, col) doit être vide
 * @row: ligne
 * @col: colonne
 *
 * Return: 1 si vide, 0 sinon
 */
static int is_blank(int row, int col)
{
	while (row > 0 || col > 0)
	{
		if (row % 3 == 1 && col % 3 == 1)
			return (1);
		row /= 3;
		col /= 3;
	}
	return (0);
}

/**
 * menger - Dessine une éponge de Menger de niveau donné
 * @level: niveau de l'éponge
 */
void menger(int level)
{
	int size, row, col;

	if (level < 0)
		return;

	size = pow(3, level);
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (is_blank(row, col))
				putchar(' ');
			else
				putchar('#');
		}
		putchar('\n');
	}
}
