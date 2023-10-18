/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:26:35 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/18 19:52:43 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int searchc)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == searchc)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
