/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:39:15 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/19 11:37:05 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned int	diff;

	i = 0;
	diff = 0;
	while ((str1[i]) && (str2[i]) && (i < n) && !diff)
	{
		diff = (unsigned char)str1[i] - (unsigned char)str2[i];
		i++;
	}
	if ((str1[i] == 0 || str2[i] == 0) && (i < n) && !diff)
		diff = (unsigned char)str1[i] - (unsigned char)str2[i];
	return (diff);
}
