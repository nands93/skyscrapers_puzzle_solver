/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:51:33 by femarque          #+#    #+#             */
/*   Updated: 2023/07/11 14:00:07 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# define SIZE 4

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_atoi(char *str);
int		ft_error(char *s);
int		count_top_col(int col, int grid[SIZE][SIZE]);
int		count_bottom_col(int col, int grid[SIZE][SIZE]);
int		count_left_rows(int row, int grid[SIZE][SIZE]);
int		count_right_rows(int row, int grid[SIZE][SIZE]);
int		check_res(int *res, int grid[SIZE][SIZE]);
int		right_row(int *res, int grid[SIZE][SIZE]);
int		left_row(int *res, int grid[SIZE][SIZE]);
int		bottom_col(int *res, int grid[SIZE][SIZE]);
int		top_col(int *res, int grid[SIZE][SIZE]);
int		is_valid(int row, int col, int value, int grid[SIZE][SIZE]);
int		fill_grid(int row, int col, int *res, int grid[SIZE][SIZE]);
void	print_grid(int grid[SIZE][SIZE]);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putendl_fd(char *s, int fd);

#endif