/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:00:49 by femarque          #+#    #+#             */
/*   Updated: 2023/07/10 14:09:57 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	hasDuplicateInRow(int puzzle[SIZE][SIZE], int row, int col)
{
	int i;

	i = 0;
    while (i < col)
	{
        if (puzzle[row][i] == puzzle[row][col])
            return (1);
		i++;
    }
    return (0);
}

int	hasDuplicateInColumn(int puzzle[SIZE][SIZE], int row, int col)
{
	int i;

	i = 0;
    while (i < row)
	{
        if (puzzle[i][col] == puzzle[row][col])
            return (1);
    }
    return (0);
}

int isValid(int puzzle[SIZE][SIZE], int values[16], t_position pos)
{
    int row;
    int col;

	row = pos.row;
    col = pos.col;
    if (hasDuplicateInRow(puzzle, row, col) || hasDuplicateInColumn(puzzle, row, col))
        return (0);
    if (!checkVisibilityLeft(puzzle, values, row, col) || \
	!checkVisibilityRight(puzzle, values, row, col) ||
        !checkVisibilityUp(puzzle, values, row, col) || \
		!checkVisibilityDown(puzzle, values, row, col))
        return (0);
    return (1);
}