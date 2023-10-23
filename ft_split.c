/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:50:30 by niotzenb          #+#    #+#             */
/*   Updated: 2023/10/23 10:40:25 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
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

static int	ft_lenword(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	return (i);
}

static int	ft_free(char **tab, int j)
{
	while (j >= 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
	return (1);
}

static char	**ft_slip(char const *s, char c, int i, int j)
{
	char	**tab;
	int		countword;
	int		lenword;

	countword = ft_countword(s, c);
	tab = malloc(sizeof(char *) * (countword + 1));
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
			if (!tab[j] && (ft_free(tab, j)))
				return (NULL);
			j++;
		}
		while (s[i] && (s[i] != c))
			i++;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	return (ft_slip(s, c, 0, 0));
}
