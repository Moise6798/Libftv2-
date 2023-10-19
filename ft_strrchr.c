/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:26:03 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/19 13:06:28 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int searchc)
{
	int	i;

	i = ft_strlen(str);
	while ((i >= 0))
	{
		if (str[i] == (char)searchc)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}
