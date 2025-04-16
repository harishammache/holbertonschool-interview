#include "slide_line.h"

/**
 * slide_line - Slides and merges an array of integers to the left or right
 * @line: Pointer to the array of integers
 * @size: Number of elements in the array
 * @direction: Direction to slide and merge (SLIDE_LEFT or SLIDE_RIGHT)
 *
 * Return: 1 on success, 0 on failure
 */
int slide_line(int *line, size_t size, int direction)
{
    size_t i, pos;

    if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
        return (0);

    if (direction == SLIDE_LEFT)
    {
        pos = 0;
        for (i = 0; i < size; i++)
        {
            if (line[i] != 0)
            {
                if (pos > 0 && line[pos - 1] == line[i])
                {
                    line[pos - 1] *= 2;
                    line[i] = 0;
                }
                else
                {
                    if (pos != i)
                    {
                        line[pos] = line[i];
                        line[i] = 0;
                    }
                    pos++;
                }
            }
        }
    }
    else if (direction == SLIDE_RIGHT)
    {
        pos = size - 1;
        for (i = size; i > 0; i--)
        {
            if (line[i - 1] != 0)
            {
                if (pos < size - 1 && line[pos + 1] == line[i - 1])
                {
                    line[pos + 1] *= 2;
                    line[i - 1] = 0;
                }
                else
                {
                    if (pos != i - 1)
                    {
                        line[pos] = line[i - 1];
                        line[i - 1] = 0;
                    }
                    pos--;
                }
            }
        }
    }
    return (1);
}