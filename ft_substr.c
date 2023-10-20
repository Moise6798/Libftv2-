/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:19:49 by niotzenb          #+#    #+#             */
/*   Updated: 2023/10/20 15:13:31 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	end;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	end = 0;
	if (start >= s_len)
		return (ft_strdup(""));
	end = s_len - start;
	if (end > len)
		end = len;
	dest = malloc(end + 1);
	if (!dest)
		return (0);
	ft_strlcpy(dest, (s + start), (end + 1));
	return (dest);
}
