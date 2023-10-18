/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:26:03 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/18 11:29:05 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int searchc)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	while (str[i])
	{
		if (str[i] == searchc)
			return (str + i);
		i--;
	}
	return (0);
}
