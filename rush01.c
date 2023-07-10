/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:57:31 by femarque          #+#    #+#             */
/*   Updated: 2023/07/10 16:20:05 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int main(int argc, char **argv)
{
    int restrictions[16];
    int grid[SIZE][SIZE];
    int i;
    
    ft_memset(grid, 0, sizeof(grid));
    if (argc != 17)
    {
        ft_error("Error");
        return 0;
    }
    i = 1;
    while (i < argc)
    {
        restrictions[i - 1] = ft_atoi(argv[i]);
        i++;
    }
    if (fill_grid(0, 0, restrictions, grid))
        print_grid(grid);
    else
        printf("Error\n");
    return (0);
}
