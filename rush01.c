/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:57:31 by femarque          #+#    #+#             */
/*   Updated: 2023/07/10 15:03:20 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	solvePuzzle(int puzzle[SIZE][SIZE], int values[16], t_position pos)
{
	int i;

    if (pos.row == SIZE)
		return (1);
	i = 1;
    while (i <= SIZE)
	{
        puzzle[pos.row][pos.col] = i;
        t_position nextPos;

        if (pos.col == SIZE - 1)
		{
            nextPos.row = pos.row + 1;
            nextPos.col = 0;
        }
		else
		{
            nextPos.row = pos.row;
            nextPos.col = pos.col + 1;
        }
        if (isValid(puzzle, values, pos) && solvePuzzle(puzzle, values, nextPos))
            return (1);
		i++;
    }
    puzzle[pos.row][pos.col] = 0;
    return (0);
}

void printPuzzle(int puzzle[SIZE][SIZE])
{
    int i;
	int j;

	i = 0;
    while (i < SIZE)
	{
		j = 0;
        while (j < SIZE)
		{
            ft_putnbr(puzzle[i][j]);
            if (j != SIZE - 1)
                ft_putchar(' ');
			j++;
        }
        ft_putchar('\n');
		i++;
    }
}

int	main(int argc, char **argv) 
{
	int values[16];
    int i;
	int puzzle[SIZE][SIZE];
	t_position initialPos;

	ft_memset(puzzle, 0, sizeof(puzzle));
    if (argc > 17) 
	{
        ft_putstr("Erro: número inválido de argumentos\n");
        return (1);
    }
	i = 0;
    while (i < 16)
	{
        values[i] = ft_atoi(argv[i + 1]);
        if (values[i] < 1 || values[i] > 4)
		{
            ft_putstr("Erro: valor inválido encontrado\n");
            return (1);
        }
		i++;
    }
    initialPos.row = 0;
    initialPos.col = 0;
    if (solvePuzzle(puzzle, values, initialPos))
        printPuzzle(puzzle);
	else 
        ft_putstr("Não foi encontrada uma solução\n");
    return (0);
}
