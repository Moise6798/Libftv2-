/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:37:36 by niotzenb          #+#    #+#             */
/*   Updated: 2023/10/23 11:47:51 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_count(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

static	void	ft_fill_number(char *number, int n, int len)
{
	long int	num;

	if (n < 0)
	{
		number[0] = '-';
		num = -n;
	}
	else
		num = n;
	while (--len >= 0)
	{
		if (number[len] != '-')
		{
			number[len] = num % 10 + '0';
			num = num / 10;
		}
	}
}

char	*ft_itoa(int n)
{
	char		*number;
	long int	nb;
	int			len;

	nb = n;
	len = ft_len_count(nb);
	if (nb == INT_MIN)
	{
		number = malloc(sizeof(char) * 12);
		ft_strlcpy(number, "-2147483648", 12);
		return (number);
	}
	if (nb != 0)
		number = malloc(sizeof(char) * (len + 1));
	else
		return (number = ft_strdup("0"));
	if (!(number))
		return (0);
	ft_fill_number(number, nb, len);
	number[len] = '\0';
	return (number);
}
