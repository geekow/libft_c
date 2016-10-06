/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 16:54:59 by                   #+#    #+#             */
/*   Updated: 2016/10/06 01:55:21 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	if (s == NULL)
		return (NULL);
	while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	start = i;
	end = i;
	while(s[i] != '\0')
	{
		if(s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			end = i;
		i++;
	}
	if (start != end)
		return (ft_strsub(s, start, ++end - start));
	else
		return ("");
}
