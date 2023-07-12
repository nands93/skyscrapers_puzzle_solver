#include "skyscraper.h"

int	count_top_col(int col, int grid[SIZE][SIZE])
{
	int	view;
	int	max_h;
	int	row;

	view = 0;
	max_h = 0;
	row = 0;
	while (row < SIZE)
	{
		if (grid[row][col] > max_h)
		{
			max_h = grid[row][col];
			view++;
		}
		row++;
	}
	return (view);
}

int	count_bottom_col(int col, int grid[SIZE][SIZE])
{
	int	view;
	int	max_h;
	int	row;

	view = 0;
	max_h = 0;
	row = SIZE - 1;
	while (row >= 0)
	{
		if (grid[row][col] > max_h)
		{
			max_h = grid[row][col];
			view++;
		}
		row--;
	}
	return (view);
}

int	count_left_rows(int row, int grid[SIZE][SIZE])
{
	int	view;
	int	max_h;
	int	col;

	view = 0;
	max_h = 0;
	col = 0;
	while (col < SIZE)
	{
		if (grid[row][col] > max_h)
		{
			max_h = grid[row][col];
			view++;
		}
		col++;
	}
	return (view);
}

int	count_right_rows(int row, int grid[SIZE][SIZE])
{
	int	view;
	int	max_h;
	int	col;

	view = 0;
	max_h = 0;
	col = SIZE - 1;
	while (col >= 0)
	{
		if (grid[row][col] > max_h)
		{
			max_h = grid[row][col];
			view++;
		}
		col--;
	}
	return (view);
}
