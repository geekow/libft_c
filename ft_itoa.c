/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 22:36:07 by                   #+#    #+#             */
/*   Updated: 2016/09/06 23:00:52 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_size(int n)
{
	size_t	result;

	result = 2;
	if (n >= 0)
	{
		result--;
		n = -n;
	}
	while (n < -9)
	{
		n = n / 10;
		result++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	i;

	i = get_size(n);
	result = (char*)malloc(sizeof(*result) * i);
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	else
		n = -n;
	result[i--] = '\0';
	while (n < -9)
	{
		result[i--] = -1 * (n % 10) + '0';
		n = n / 10;
	}
	result[i] = -1 * (n % 10) + '0';
	return (result);
}
