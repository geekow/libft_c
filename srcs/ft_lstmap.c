/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:06:47 by jjacobi           #+#    #+#             */
/*   Updated: 2016/11/07 11:06:49 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;

	if (!(*f))
		return (NULL);
	result = f(lst);
	while (lst)
	{
		ft_lstadd(&result, f(lst));
		if (!result)
			return (NULL);
		lst = lst->next;
	}
	return (result);
}
