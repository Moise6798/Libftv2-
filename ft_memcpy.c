/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:40:25 by niotzenb          #+#    #+#             */
/*   Updated: 2023/10/18 11:29:19 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *d;
    unsigned char   *s;
    size_t          i;

    *d = (unsigned char *)dest;
    *s = (unsigned char *)src;
    i = 0;
    if ((d == s) || (n == 0))
        return (dest);
    while ((s[i]) && (i < n))
    {
        s[i] = d[i];
        i++;
    }
}