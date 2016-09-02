/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 15:51:33 by                   #+#    #+#             */
/*   Updated: 2016/09/02 16:07:10 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	result = (char*)malloc(sizeof(*result) * len);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < start)
		i++;
	while (s[i] != '\0' && (i - start) < len)
	{
		result[i - start] = s[i];
		i++;
	}
	result[i - start] = '\0';
	return (result);
}
