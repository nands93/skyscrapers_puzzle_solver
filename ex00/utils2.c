/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:17:06 by femarque          #+#    #+#             */
/*   Updated: 2023/07/11 15:54:43 by femarque         ###   ########.fr       */
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

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	if (!dst || !src)
		return (0);
	while (src[len] != '\0')
	{
		len++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	len_s;
	size_t	len_d;

	if (!s)
		return (NULL);
	len_s = ft_strlen((char *)s);
	len_d = len_s - start;
	if (start > len_s)
		return (ft_strdup(""));
	if (len_d >= len)
		dest = malloc(sizeof(char) * (len + 1));
	else
		dest = malloc(sizeof(char) * (len_d + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, &s[start], (len + 1));
	return (dest);
}
