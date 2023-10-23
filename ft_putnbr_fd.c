/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:55:06 by niotzenb          #+#    #+#             */
/*   Updated: 2023/10/23 11:55:43 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	a;

	if (n < 0)
	{
		write(fd, "-", 1);
		a = -n;
	}
	else
		a = n;
	if (a > 9)
		ft_putnbr_fd(a / 10, fd);
	ft_putchar_fd(a % 10 + 48, fd);
}
