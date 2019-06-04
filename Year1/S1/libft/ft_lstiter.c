/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:15 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/04 13:04:02 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	//TODO
	if (lst != NULL && f != NULL)
	{
		lst = lst->next;
		while (lst != NULL)
		{
			//lst = lst->next;
			f(lst->content);
			lst = lst->next;
		}
	}
}
