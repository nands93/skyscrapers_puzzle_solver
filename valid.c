/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:59:44 by femarque          #+#    #+#             */
/*   Updated: 2023/07/10 16:02:10 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int count_visible_boxes_top_columns(int col, int grid[SIZE][SIZE]) {
    int view_count = 0;
    int max_height = 0;
    for (int row = 0; row < SIZE; row++) {
        if (grid[row][col] > max_height) {
            max_height = grid[row][col];
            view_count++;
        }
    }
    return view_count;
}

int count_visible_boxes_bottom_columns(int col, int grid[SIZE][SIZE]) {
    int view_count = 0;
    int max_height = 0;
    for (int row = SIZE - 1; row >= 0; row--) {
        if (grid[row][col] > max_height) {
            max_height = grid[row][col];
            view_count++;
        }
    }
    return view_count;
}

int count_visible_boxes_left_rows(int row, int grid[SIZE][SIZE]) {
    int view_count = 0;
    int max_height = 0;
    for (int col = 0; col < SIZE; col++) {
        if (grid[row][col] > max_height) {
            max_height = grid[row][col];
            view_count++;
        }
    }
    return view_count;
}

int count_visible_boxes_right_rows(int row, int grid[SIZE][SIZE]) {
    int view_count = 0;
    int max_height = 0;
    for (int col = SIZE - 1; col >= 0; col--) {
        if (grid[row][col] > max_height) {
            max_height = grid[row][col];
            view_count++;
        }
    }
    return view_count;
}
