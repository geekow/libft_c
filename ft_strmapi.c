/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 01:34:04 by                   #+#    #+#             */
/*   Updated: 2016/10/06 01:09:38 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*result;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
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
