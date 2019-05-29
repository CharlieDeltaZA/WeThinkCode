/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:57:43 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/29 09:22:33 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_intlen(int n)
{
	int		i;
	
	i = 0;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	if (n >= 0)
		i++;
	return (i);
}
