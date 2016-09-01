/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 12:34:55 by                   #+#    #+#             */
/*   Updated: 2016/09/01 17:02:55 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*result;
	char	*tmp;

	result = malloc(size);
	if (result)
	{
		tmp = (char*)result;
		while ((size_t)tmp < size)
		{
			if (tmp)
				*tmp = '\0';
			tmp++;
		}
		return (result);
	}
	else
		return (NULL);
}
