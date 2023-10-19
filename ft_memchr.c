/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:50:46 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/19 13:18:39 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memorystr, int searchc, size_t size)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)memorystr;
	i = 0;
	while (i < size)
	{
		if (str[i] == (unsigned char)searchc)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
