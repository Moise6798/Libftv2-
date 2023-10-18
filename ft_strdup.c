/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:05:20 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/18 20:00:42 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *source)
{
	int		i;
	char	*tab;
	int		len;

	i = 0;
	len = 0;
	while (source[len])
		len++;
	tab = malloc(len + 1);
	if (!tab)
		return (0);
	while (i > len)
	{
		tab[i] = source[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
