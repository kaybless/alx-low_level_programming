#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Return a pointer to a 2 dimensional array of integers.
 * @width: is the width of a bidementional array
 * @height: is the height of a bidimentional array
 * Return: an address
 */

int **alloc_grid(int width, int height)
{
    int **matriz;
    int i, j;

    if (width <= 0 || height <= 0 || (height == 1 && width == 1))
        return (NULL);

    matriz = malloc(height * sizeof(int *));
    if (!matriz)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        matriz[i] = malloc(width * sizeof(int));

        if (!matriz[i])
        {
            for (i--; i >= 0; i--)
                free(matriz[i]);

            free(matriz);
            return (NULL);
        }
    }

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
            matriz[i][j] = 0;
    }

    return (matriz);
}