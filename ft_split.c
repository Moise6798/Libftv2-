/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:50:30 by niotzenb          #+#    #+#             */
/*   Updated: 2023/10/20 15:55:28 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			word++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (word);
}

static int	ft_lenword(char const *s, char c)
{
	int	i;

	i = 0;
	while ((s[i] != c) && s[i])
		i++;
	return (i);
}

static char	*ft_wordcpy(char *word, char const *s, int i, int lenword)
{
	int	j;

	j = 0;
	while (lenword > 0)
	{
		word[j] = s[i - lenword];
		j++;
		lenword--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_word(char const *s, char c, char **tab, int wordcount)
{
	int	i;
	int	j;
	int	lenword;

	i = 0;
	j = 0;
	while (j < wordcount)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			lenword = ft_lenword(s, c);
		}
		tab[j] = malloc(lenword + 1);
		if (!tab)
			return (0);
		ft_wordcpy(tab[j], s, i, lenword);
		lenword = 0;
		j++;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		wordcount;

	wordcount = ft_wordcount(s, c);
	tab = malloc(wordcount + 1);
	if (!tab)
		return (0);
	ft_split_word(s, c, tab, wordcount);
	return (tab);
}

int		main(void)
{
	int i = 0;
	char **tab;
	char	c = ' ';
	
	tab = ft_split(" bonjour  je   m'appel paul", c);
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);

}
