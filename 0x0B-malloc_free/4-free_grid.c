#include <stdio.h>
		
#include <stdlib.h>
		
#include "main.h"
		
/**
		
 * free_grid - frees 2d array
		
 * @grid: 2d grid
		
 * @height: height dimension of grid
		
 * Description: frees memory of grid
		
 * Return: nothing
		
 *
		
 */
		
void free_grid(int **grid, int height)
		
{
		
	int i;
		

		
	for (i = 0; i < height; i++)
		
	{
		
		free(grid[i]);
		
	}
		
	free(grid);
		
}
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}
