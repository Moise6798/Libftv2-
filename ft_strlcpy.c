/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:00:37 by niotzenb          #+#    #+#             */
/*   Updated: 2023/10/18 20:38:59 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	if (!dest || !src)
		return (0);
	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	while ((src) && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	i = 0;
	while (src)
		i++;
	return (i);
}
