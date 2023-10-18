/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:40:25 by niotzenb          #+#    #+#             */
/*   Updated: 2023/10/18 13:47:53 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	*d = (unsigned char *)dest;
	*s = (unsigned char *)src;
	i = 0;
	if ((d == s) || (n == 0))
		return (dest);
	while ((s[i]) && (i < n))
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
