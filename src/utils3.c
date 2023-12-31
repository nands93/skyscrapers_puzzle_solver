#include "../libs/skyscraper.h"

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

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*copy;

	len = strlen(s1) + 1;
	copy = malloc(len);
	if (!(copy))
		return (NULL);
	memcpy(copy, s1, len);
	return (copy);
}
