/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 19:51:48 by                   #+#    #+#             */
/*   Updated: 2016/09/08 22:50:46 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
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
			if (needle[++index_tf] == '\0' || index_tf == len)
				return ((char*)&haystack[index_str]);
		index_str++;
	}
	return ((char*)0);

}
