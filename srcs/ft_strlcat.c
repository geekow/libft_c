/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 23:01:31 by jjacobi           #+#    #+#             */
/*   Updated: 2016/11/03 23:35:35 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t count)
{
	size_t	result;
	size_t	dest_l;
	size_t	src_l;

	result = ft_strlen(dest) + ft_strlen(src);
	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	if (count < dest_l)
		return (src_l + count);
	count -= dest_l;
	dest += dest_l;
	if (src_l > count)
		src_l = count - 1;
	dest = (char*)ft_memcpy(dest, src, src_l);
	dest[src_l] = '\0';
	return (result);
}
