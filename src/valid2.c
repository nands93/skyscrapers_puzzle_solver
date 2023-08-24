#include "../libs/skyscraper.h"

int	top_col(int *res, int grid[SIZE][SIZE])
{
	int	col;
	int	view;

	col = 0;
	while (col < SIZE)
	{
		view = count_top_col(col, grid);
		if (view != res[col])
			return (0);
		col++;
	}
	return (1);
}

int	bottom_col(int *res, int grid[SIZE][SIZE])
{
	int	col;
	int	view;

	col = 0;
	while (col < SIZE)
	{
		view = count_bottom_col(col, grid);
		if (view != res[SIZE + col])
			return (0);
		col++;
	}
	return (1);
}

int	left_row(int *res, int grid[SIZE][SIZE])
{
	int	row;
	int	view;

	row = 0;
	while (row < SIZE)
	{
		view = count_left_rows(row, grid);
		if (view != res[2 * SIZE + row])
			return (0);
		row++;
	}
	return (1);
}

int	right_row(int *res, int grid[SIZE][SIZE])
{
	int	row;
	int	view;

	row = 0;
	while (row < SIZE)
	{
		view = count_right_rows(row, grid);
		if (view != res[2 * SIZE + SIZE + row])
			return (0);
		row++;
	}
	return (1);
}

int	check_res(int *res, int grid[SIZE][SIZE])
{
	if (!top_col(res, grid))
		return (0);
	if (!bottom_col(res, grid))
		return (0);
	if (!left_row(res, grid))
		return (0);
	if (!right_row(res, grid))
		return (0);
	return (1);
}
