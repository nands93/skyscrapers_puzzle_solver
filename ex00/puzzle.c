/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:04:32 by femarque          #+#    #+#             */
/*   Updated: 2023/07/11 13:51:09 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_valid(int row, int col, int value, int grid[SIZE][SIZE])
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (grid[row][i] == value || grid[i][col] == value)
			return (0);
		i++;
	}
	return (1);
}

int	fill_grid(int row, int col, int *res, int grid[SIZE][SIZE])
{
	int	value;

	value = 1;
	if (row == SIZE)
	{
		if (check_res(res, grid))
			return (1);
		return (0);
	}
	if (col == SIZE)
		return (fill_grid(row + 1, 0, res, grid));
	while (value <= SIZE)
	{
		if (is_valid(row, col, value, grid))
		{
			grid[row][col] = value;
			if (fill_grid(row, col + 1, res, grid))
				return (1);
			grid[row][col] = 0;
		}
		value++;
	}
	return (0);
}

void	print_grid(int grid[SIZE][SIZE])
{
	int	row;
	int	col;

	row = 0;
	while (row < SIZE)
	{
		col = 0;
		while (col < SIZE)
		{
			ft_putnbr(grid[row][col]);
			ft_putchar(' ');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
