/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:51:33 by femarque          #+#    #+#             */
/*   Updated: 2023/07/10 16:17:52 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

#define SIZE 4

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int count_visible_boxes_top_columns(int col, int grid[SIZE][SIZE]);
int count_visible_boxes_bottom_columns(int col, int grid[SIZE][SIZE]);
int count_visible_boxes_left_rows(int row, int grid[SIZE][SIZE]);
int count_visible_boxes_right_rows(int row, int grid[SIZE][SIZE]);
int check_restrictions(int* restrictions, int grid[SIZE][SIZE]);
int check_right_rows(int* restrictions, int grid[SIZE][SIZE]);
int check_left_rows(int* restrictions, int grid[SIZE][SIZE]);
int check_bottom_columns(int* restrictions, int grid[SIZE][SIZE]);
int check_top_columns(int* restrictions, int grid[SIZE][SIZE]);
int is_valid(int row, int col, int value, int grid[SIZE][SIZE]);
int fill_grid(int row, int col, int* restrictions, int grid[SIZE][SIZE]);
void print_grid(int grid[SIZE][SIZE]);
void	*ft_memset(void *b, int c, size_t len);
int	ft_atoi(char *str);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putendl_fd(char *s, int fd);
int	ft_error(char *s);

#endif