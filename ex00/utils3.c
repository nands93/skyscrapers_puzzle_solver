/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femarque <femarque@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:53:47 by femarque          #+#    #+#             */
/*   Updated: 2023/07/11 17:42:26 by femarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	count_words(const char *s, char c)
{
	int		i;
	int		isword;

	i = 0;
	isword = 0;
	while (*s)
	{
		if (*s != c && isword == 0)
		{
			isword = 1;
			i++;
		}
		else if (*s == c)
			isword = 0;
		s++;
	}
	return (i);
}

static char	size_word(char const *s, char c, int i)
{
	int		len;

	len = 0;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		counter;
	int		size;
	char	**str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	counter = count_words((char *)s, c);
	str = (char **)malloc((counter + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (j < counter)
	{
		while (s[i] == c)
			i++;
		size = size_word(s, c, i);
		str[j] = ft_substr(s, i, size);
		j++;
		i += size;
	}
	str[j] = 0;
	return (str);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s1) + 1;
	copy = malloc(len);
	if (!(copy))
		return (NULL);
	ft_memcpy(copy, s1, len);
	return (copy);
}
