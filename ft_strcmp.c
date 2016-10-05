/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 18:26:28 by                   #+#    #+#             */
/*   Updated: 2016/10/05 21:50:19 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	index;
	int	result;

	index = 0;
	while (s1[index] == s2[index])
		if (s1[index++] == '\0')
			return (0);
	result = (unsigned char)s1[index] - (unsigned char)s2[index];
	return (result);
}
