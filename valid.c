/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:59:44 by femarque          #+#    #+#             */
/*   Updated: 2023/07/10 14:45:40 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	checkVisibilityLeft(int puzzle[SIZE][SIZE], int values[16], int row, int col)
{
    int count;
    int visible;
	int i;

	count = 1;
    visible = 1;
	i = col - 1;
    while (i >= 0)
	{
        if (puzzle[row][i] > visible)
		{
            visible = puzzle[row][i];
            count++;
        }
		i--;
    }
    if (count != values[row * SIZE + col])
		return (0);
	return (1);
}

int	checkVisibilityRight(int puzzle[SIZE][SIZE], int values[16], int row, int col)
{
	int count;
	int visible;
	int i;
	
    count = 1;
    visible = 1;
	i = col + 1;
    while (i < SIZE)
	{
        if (puzzle[row][i] > visible)
		{
            visible = puzzle[row][i];
            count++;
        }
		i++;
    }
    if (count != values[row * SIZE + col + 8])
		return (0);
	return (1);
}

int	checkVisibilityUp(int puzzle[SIZE][SIZE], int values[16], int row, int col)
{
	int count;
	int visible;
	int i;
	
	i = row - 1;
	count = 1;
	visible = 1;
	while (i >= 0)
	{
		if (puzzle[i][col] > visible)
		{
			visible = puzzle[i][col];
			count++;
		}
		i--;
	}
	if (count != values[row * SIZE + col + 4])
		return (0);
	return (1);
}

int	checkVisibilityDown(int puzzle[SIZE][SIZE], int values[16], int row, int col)
{
    int	count;
    int	visible;
	int	i;

	count = 1;
    visible = 1;
	i = row + 1;
    while (i < SIZE)
	{
        if (puzzle[i][col] > visible)
		{
            visible = puzzle[i][col];
            count++;
        }
		i++;
    }
    if (count != values[row * SIZE + col + 12])
		return (0);
    return (1);
}
