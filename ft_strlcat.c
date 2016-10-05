/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 21:25:28 by                   #+#    #+#             */
/*   Updated: 2016/10/05 15:18:12 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t count)
{
	size_t	result;
	size_t	dest_l;
	size_t	src_l;

	result = strlen(dest) + strlen(src);
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
