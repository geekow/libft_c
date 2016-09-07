/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 18:18:36 by                   #+#    #+#             */
/*   Updated: 2016/09/07 18:23:14 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	int	result;

	result = 0;
	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] == s2[index] && index < n)
	{
		if (s1[index] == '\0')
			return (0);
		index++;
	}
	result = s1[index] - s2[index];
	return (result);
}
