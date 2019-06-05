/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:29:56 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 09:33:53 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Determines whether the character passed is printable or not.
** 32-126 inclusive (decimal values). `man ascii`
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (TRUE);
	else
		return (FALSE);
}
