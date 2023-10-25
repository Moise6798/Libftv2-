/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notzenbe <notzenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:17:42 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/25 10:14:04 by notzenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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



int	main(void)
{
	int		*content;
	t_list	*listnew;

	*content = 42;
	listnew = ft_lstnew(content);
	printLinkedList(listnew);
	return (0);
}


