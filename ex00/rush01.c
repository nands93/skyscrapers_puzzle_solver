/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:57:31 by femarque          #+#    #+#             */
/*   Updated: 2023/07/11 14:43:10 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int	res[16];
	int	grid[SIZE][SIZE];
	int	i;

	ft_memset(grid, 0, sizeof(grid));
	if (argc != 17)
	{
		ft_error("Error");
		return (1);
	}
	i = 0;
	while (++i < argc)
		res[i - 1] = ft_atoi(argv[i]);
	if (fill_grid(0, 0, res, grid))
		print_grid(grid);
	else
		ft_error("Error");
	return (0);
}
