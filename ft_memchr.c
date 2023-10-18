/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:50:46 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/18 13:42:30 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *memorystr, int searchc, size_t size)
{
	char	*str;
	size_t	i;

	*str = *memorystr;
	i = 0;
	while ((str[i]) && (i < size))
	{
		if (str[i] == searchc)
			return (str + i);
		i++;
	}
	return (0);
}
