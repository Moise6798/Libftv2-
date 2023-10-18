/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:35:01 by niotzenb          #+#    #+#             */
/*   Updated: 2023/10/18 13:48:14 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	size_t			i;

	*p = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (p);
}
