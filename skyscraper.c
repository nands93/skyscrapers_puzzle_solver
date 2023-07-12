#include "skyscraper.h"

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

	grids = NULL;
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
	free_grid(grids);
	if (fill_grid(0, 0, res, grid))
		print_grid(grid);
	else
		ft_error("Error");
	return (0);
}
