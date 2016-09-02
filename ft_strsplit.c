/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 20:37:44 by                   #+#    #+#             */
/*   Updated: 2016/09/02 20:38:57 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_nbrs(char const *s, char c)
{
	size_t	i;
	size_t	result;

	i = 0;
	result = 0;
	while(s[i] != '\0')
	{
		while(s[i] == c)
			i++;
		if (s[i] == '\0')
			return (result);
		while(s[i] != '\0' && s[i] != c)
			i++;
		result += 1;
	}
	return (result);
}

char	*str_to_put(char const *s, char c, size_t *i)
{
	char	*result;
	size_t	j;
	size_t	k;

	while (s[*i] != '\0' && s[*i] == c)
		*i += 1;
	j = *i;
	k = j;
	while (s[*i] != '\0' && s[*i] != c)
		*i += 1;
	result = (char*)malloc(sizeof(*result) * (*i - j));
	if (!result)
		return (NULL);
	while (j < *i)
	{
		result[j - k] = s[j];
		j++;
	}
	result[j - k] = '\0';
	return (result);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**result;
	size_t	w;
	size_t	w_max;
	size_t	i;

	w_max = str_nbrs(s, c);
	result = (char**)malloc(sizeof(**result));
	if (!result)
		return (NULL);
	*result = (char*)malloc(sizeof(*result) * w_max);
	if (!*result)
		return (NULL);
	w = 0;
	i = 0;
	while(w < w_max)
	{
		result[w] = str_to_put(s, c , &i);
		if (result[w] == NULL)
			return (NULL);
		w++;
	}
	result[w] = '\0';
	return (result);
}

