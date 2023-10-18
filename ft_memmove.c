/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 08:38:56 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/18 11:27:48 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t 	i;

	i = 0;
	*d = *dest;
	*s = *src;
	if ((d == s) || (n == 0))
		return (dest);
	if (d < s)
	{
		while (n--)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (s < d)
	{
		while (n--)
		{
			d[n] = s[n]
		}
	}
	return (dest);
}
