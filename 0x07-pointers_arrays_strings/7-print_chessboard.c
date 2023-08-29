#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to the 2D array representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int row;

	for (row = 0; row < 8; row++)
	{
		int col;

		for (col = 0; col < 8; col++)
		{
			printf("%c", a[row][col]);
		}
		printf("\n");
	}
}
