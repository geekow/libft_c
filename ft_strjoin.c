/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 16:25:27 by                   #+#    #+#             */
/*   Updated: 2016/09/02 16:40:04 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	i2;

	result = (char*)malloc(sizeof(s1) + sizeof(s2) - sizeof(*s2));
	if (!result)
		return (NULL);
	i = 0;
	while(s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	i2 = 0;
	while(s2[i2] != '\0')
		result[i++] = s2[i2++];
	result[i] = '\0';
	return (result);
}
