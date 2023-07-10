/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:17:06 by femarque          #+#    #+#             */
/*   Updated: 2023/07/10 16:18:42 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	nl;

	nl = '\n';
	while (*s != '\0')
	{
		write(fd, &(*s), 1);
		s++;
	}
	write(fd, &nl, 1);
}

int	ft_error(char *s)
{
	ft_putendl_fd(s, 2);
	return (-1);
}