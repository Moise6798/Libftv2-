/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:06:26 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/18 11:34:38 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while ((big[i]) && (i < len))
	{
		j = 0;
		if (big[i] == little[j])
			{
				while ((big[i + j] == little[j]) && (little[j]))
				{
					if (!(little[j + 1]))
						return ((char *)big + i);
					j++;
				}
			}
		i++;
	}
	return(0);
}
