/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:51:33 by femarque          #+#    #+#             */
/*   Updated: 2023/07/10 14:58:27 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

#define SIZE 4

#include <unistd.h>
#include <stdlib.h>

typedef struct s_position {
    int row;
    int col;
} t_position;

int		ft_atoi(char *str);
int		hasDuplicateInRow(int puzzle[SIZE][SIZE], int row, int col);
int		hasDuplicateInColumn(int puzzle[SIZE][SIZE], int row, int col);
int		checkVisibilityLeft(int puzzle[SIZE][SIZE], int values[16], int row, int col);
int		checkVisibilityRight(int puzzle[SIZE][SIZE], int values[16], int row, int col);
int		checkVisibilityUp(int puzzle[SIZE][SIZE], int values[16], int row, int col);
int		checkVisibilityDown(int puzzle[SIZE][SIZE], int values[16], int row, int col);
int		isValid(int puzzle[SIZE][SIZE], int values[16], t_position pos);
int		solvePuzzle(int puzzle[SIZE][SIZE], int values[16], t_position pos);
void	*ft_memset(void *b, int c, size_t len);
void	printPuzzle(int puzzle[SIZE][SIZE]);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);

#endif