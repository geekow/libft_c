/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 21:00:17 by                   #+#    #+#             */
/*   Updated: 2016/09/07 21:01:51 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i_src;
	size_t	i_dest;
	size_t	i;

	i_src = 0;
	i_dest = 0;
	i = 0;
	while (src[i_src] != '\0')
		i_src++;
	while (dest[i_dest] != '\0')
		i_dest++;
	while (i <= i_src)
	{
		dest[i_dest + i] = src[i];
		i++;
	}
	return (dest);
}
