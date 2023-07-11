/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:57:31 by femarque          #+#    #+#             */
/*   Updated: 2023/07/11 17:11:38 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	array_len(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		res[16];
	int		grid[SIZE][SIZE];
	char	**grids;
	int		i;
	int		len;

	if (argc != 2)
	{
		ft_error("Error");
		return (1);
	}
	ft_memset(grid, 0, sizeof(grid));
	grids = ft_split(argv[1], ' ');
	len = array_len(grids);
	i = -1;
	while (++i < len)
		res[i] = ft_atoi(grids[i]);
	if (fill_grid(0, 0, res, grid))
		print_grid(grid);
	else
		ft_error("Error");
	return (0);
}
