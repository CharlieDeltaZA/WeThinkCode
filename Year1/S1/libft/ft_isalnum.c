/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:26:14 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 09:24:47 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Determines whether the character passed is alphanumeric or not.
** Makes use of isalpha, isdigit to determine result.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == TRUE) || (ft_isdigit(c) == TRUE))
		return (TRUE);
	else
		return (FALSE);
}
