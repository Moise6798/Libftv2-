/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:05:20 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/19 13:22:48 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*tab;
	int		len;

	len = ft_strlen(source) + 1;
	tab = malloc(len);
	if (!tab)
		return (0);
	ft_memcpy(tab, source, len);
	return (tab);
}
