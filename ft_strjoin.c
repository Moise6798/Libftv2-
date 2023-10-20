/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:17:06 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/20 10:42:54 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	char	*tab;

	if (!s1 || !s2)
		return (0);
	total_size = (ft_strlen(s1) + ft_strlen(s2));
	tab = malloc(total_size + 1);
	if (!tab)
		return (0);
	ft_strlcpy(tab, s1, total_size + 1);
	ft_strlcat(tab, s2, total_size + 1);
	return (tab);
}
