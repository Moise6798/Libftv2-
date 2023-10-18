/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:38:19 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/18 20:06:44 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (p);
}

void	*ft_calloc(size_t elemcount, size_t elemsize)
{
	char	*tab;
	size_t	total_size;

	total_size = elemcount * elemsize;
	tab = malloc(total_size);
	if (!tab)
		return (0);
	ft_memset(tab, 0, total_size);
	return (tab);
}
