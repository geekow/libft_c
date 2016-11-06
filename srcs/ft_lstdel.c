/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:16:49 by                   #+#    #+#             */
/*   Updated: 2016/11/06 15:48:39 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*cache;

	while (*alst)
	{
		if (del)
			del((*alst)->content, (*alst)->content_size);
		cache = (*alst)->next;
		free(*alst);
		(*alst) = cache;
	}
	*alst = NULL;
}
