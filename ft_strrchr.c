/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 01:30:30 by                   #+#    #+#             */
/*   Updated: 2016/09/08 01:33:34 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	i = ft_strlen(s);
	while(i > 0)
	{
		if (s[i] == (char)c)
		{
			ptr = (char*)s + i;
			return (ptr);
		}
		i--;
	}
	if (s[i] == (char)c)
	{
		ptr = (char*)s + i;
		return (ptr);
	}
	return (NULL);
}

