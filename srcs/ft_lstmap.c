/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:22:22 by                   #+#    #+#             */
/*   Updated: 2016/11/06 16:33:47 by                  ###   ########.fr       */
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
