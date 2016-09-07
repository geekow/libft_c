/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 19:51:48 by                   #+#    #+#             */
/*   Updated: 2016/09/07 20:15:35 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index_str;
	size_t	index_tf;
	char	*result;

	index_str = 0;
	while (haystack[index_str] != '\0')
	{
		index_tf = 0;
		while (haystack[index_str + index_tf] == needle[index_tf])
		{
			if (needle[++index_tf] == '\0' || index_tf == len)
			{
				result = ft_strdup(haystack);
				return (&result[index_str]);
			}
		}
		index_str++;
	}
	return (0);

}
