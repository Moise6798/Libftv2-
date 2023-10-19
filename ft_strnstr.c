/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:06:26 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/19 11:53:19 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while ((big[i]) && (i < len))
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (((i + j) < len && big[i + j] == little[j]) && little[j])
			{
				if (!(little[j + 1]))
					return ((char *)big + i);
				j++;
			}
		}
		i++;
	}
	return (0);
}
