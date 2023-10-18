/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:50:46 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/18 20:04:54 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *memorystr, int searchc, size_t size)
{
	const char	*str;
	size_t		i;

	str = (const char *)memorystr;
	i = 0;
	while ((str[i]) && (i < size))
	{
		if (str[i] == searchc)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
