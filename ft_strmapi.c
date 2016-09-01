/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 01:34:04 by                   #+#    #+#             */
/*   Updated: 2016/09/02 01:40:15 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*result;
	unsigned int	i;

	i = 0;
	result = (char*)malloc(sizeof(s));
	if (!result)
		return (NULL);
	while(s[i] != '\0')
	{
		result[i] = f(i ,s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);

}
