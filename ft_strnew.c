/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 23:44:21 by                   #+#    #+#             */
/*   Updated: 2016/09/01 12:43:00 by                  ###   ########.fr       */
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
		while(i < size)
			result[i++] = '\0';
		return (result);
	}
	else
		return (NULL);
}
