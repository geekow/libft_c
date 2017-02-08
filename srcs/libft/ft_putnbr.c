/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 22:57:36 by jjacobi           #+#    #+#             */
/*   Updated: 2016/11/03 22:57:38 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	result[10];
	size_t	i;

	if (n < 0)
		ft_putchar('-');
	else
		n = -n;
	i = 10;
	while (n < -9)
	{
		result[--i] = -1 * (n % 10) + '0';
		n = n / 10;
	}
	result[--i] = (-n % 10) + '0';
	while (i < 10)
		ft_putchar(result[i++]);
}