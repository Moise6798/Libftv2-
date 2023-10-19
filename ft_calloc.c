/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:38:19 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/19 10:27:10 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
