/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:50:46 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/18 11:28:58 by notzenbe         ###   ########.fr       */
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
		if (str[i] = searchc)
			return (str + i);
		i++;
	}
	return (0);
}
