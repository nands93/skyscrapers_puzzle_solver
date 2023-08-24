#ifndef RUSH01_H
# define RUSH01_H

# define SIZE 4

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
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
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
void	print_grid(int grid[SIZE][SIZE]);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putendl_fd(char *s, int fd);
void	free_grid(char **grid);

#endif