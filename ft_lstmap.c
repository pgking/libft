/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 20:03:09 by gmencier          #+#    #+#             */
/*   Updated: 2015/05/08 21:17:13 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_top;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	lst_top = f(lst);
	if (lst_top == NULL)
		return (NULL);
	tmp = lst_top;
	while (lst->next)
	{
		tmp->next = f(lst->next);
		if (tmp->next == NULL)
			return (NULL);
		lst = lst->next;
		tmp = tmp->next;
	}
	return (lst_top);
}
