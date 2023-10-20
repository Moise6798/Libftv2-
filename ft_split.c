/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:50:30 by niotzenb          #+#    #+#             */
/*   Updated: 2023/10/20 20:20:37 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (0);
	if ((d == s) || (n == 0))
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (!size)
		return (src_len);
	if (size != 0)
	{
		while ((src[i]) && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (src_len);
}

char	*ft_strdup(const char *source)
{
	char	*tab;
	int		len;

	len = ft_strlen(source) + 1;
	tab = malloc(len);
	if (!tab)
		return (0);
	ft_memcpy(tab, source, len);
	return (tab);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	end;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	end = 0;
	if (start >= s_len)
		return (ft_strdup(""));
	end = s_len - start;
	if (end > len)
		end = len;
	dest = malloc(end + 1);
	if (!dest)
		return (0);
	ft_strlcpy(dest, (s + start), (end + 1));
	return (dest);
}

int	ft_countword(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i] && (s[i] != c))
			word++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (word);
}

int	ft_lenword(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	return (i);
}

int	ft_free(char **tab, int j)
{
	while (j >= 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		countword;
	int		lenword;
	int		i;
	int		j;

	i = 0;
	j = 0;
	countword = ft_countword(s, c);
	tab = malloc(countword + 1);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i] && (s[i] != c))
		{
			lenword = ft_lenword((s + i), c);
			tab[j] = ft_substr(s + i, 0, lenword);
			if (!tab && (ft_free(tab, j)))
				return (NULL);
			j++;
		}
		while (s[i] && (s[i] != c))
			i++;
	}
	tab[j] = 0;
	return (tab);
}

int		main(void)
{
	int i = 0;
	char **tab;
	char	c = ' ';

	tab = ft_split("lorem", c);
	while (i < 1)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);

}

