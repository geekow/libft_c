/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 23:03:19 by jjacobi           #+#    #+#             */
/*   Updated: 2016/11/03 23:16:49 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*result;
	size_t	i;

	result = (char*)malloc(sizeof(*result) * size);
	if (result)
	{
		i = 0;
		while (i <= size)
			result[i++] = '\0';
		return (result);
	}
	else
		return (NULL);
}
