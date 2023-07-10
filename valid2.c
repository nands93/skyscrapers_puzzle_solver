/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:00:49 by femarque          #+#    #+#             */
/*   Updated: 2023/07/10 16:01:48 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int check_top_columns(int* restrictions, int grid[SIZE][SIZE]) {
    int col = 0;
    while (col < SIZE) {
        int view_count = count_visible_boxes_top_columns(col, grid);
        if (view_count != restrictions[col]) {
            return 0;
        }
        col++;
    }
    return 1;
}

int check_bottom_columns(int* restrictions, int grid[SIZE][SIZE]) {
    int col = 0;
    while (col < SIZE) {
        int view_count = count_visible_boxes_bottom_columns(col, grid);
        if (view_count != restrictions[SIZE + col]) {
            return 0;
        }
        col++;
    }
    return 1;
}

int check_left_rows(int* restrictions, int grid[SIZE][SIZE]) {
    int row = 0;
    while (row < SIZE) {
        int view_count = count_visible_boxes_left_rows(row, grid);
        if (view_count != restrictions[2 * SIZE + row]) {
            return 0;
        }
        row++;
    }
    return 1;
}

int check_right_rows(int* restrictions, int grid[SIZE][SIZE]) {
    int row = 0;
    while (row < SIZE) {
        int view_count = count_visible_boxes_right_rows(row, grid);
        if (view_count != restrictions[2 * SIZE + SIZE + row]) {
            return 0;
        }
        row++;
    }
    return 1;
}

int check_restrictions(int* restrictions, int grid[SIZE][SIZE]) {
    if (!check_top_columns(restrictions, grid)) {
        return 0;
    }
    if (!check_bottom_columns(restrictions, grid)) {
        return 0;
    }
    if (!check_left_rows(restrictions, grid)) {
        return 0;
    }
    if (!check_right_rows(restrictions, grid)) {
        return 0;
    }
    return 1;
}