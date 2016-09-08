/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 19:14:05 by                   #+#    #+#             */
/*   Updated: 2016/09/08 22:45:34 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	index_str;
	size_t	index_tf;

	index_str = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[index_str] != '\0')
	{
		index_tf = 0;
		while (haystack[index_str + index_tf] == needle[index_tf])
			if (needle[++index_tf] == '\0')
				return ((char*)&haystack[index_str]);
		index_str++;
	}
	return ((char*)0);
}
