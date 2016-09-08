/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 13:45:10 by                   #+#    #+#             */
/*   Updated: 2016/09/08 15:54:35 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*wdst;
	const char	*wsrc;

	wdst = dest;
	wsrc = src;
	if (wdst < wsrc)
		while (n)
		{
			*wdst++ = *wsrc++;
			n--;
		}
	else
	{
		wsrc += n;
		wdst += n;
		while (n)
		{
			*--wdst = *--wsrc;
			n--;
		}
	}
	return (dest);
}
