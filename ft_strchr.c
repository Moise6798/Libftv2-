/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:26:35 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/18 11:28:01 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int searchc)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == searchc)
			return (str + i);
		i++;
	}
	return (0);
}
