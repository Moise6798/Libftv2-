/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:43:32 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/20 10:47:47 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	end;
	size_t	start;

	end = ft_strlen(s);
	start = 0;
	while (s[start] && ft_strchr(set, s[start]))
		start++;
	while (end && ft_strrchr(set, s[end]))
		end--;
	return (ft_substr(s, start, (end - start) + 1));
}
