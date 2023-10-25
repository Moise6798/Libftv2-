/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:17:42 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/25 11:31:42 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*listnew;

	listnew = malloc(sizeof(*listnew));
	if (!listnew)
		return (NULL);
	listnew->content = content;
	listnew->next = NULL;
	return (listnew);
}
