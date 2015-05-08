/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 20:10:40 by gmencier          #+#    #+#             */
/*   Updated: 2015/05/08 21:24:01 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *lst)
{
	t_list	*lst_top;
	t_list	*lst_tmp;

	if (lst == NULL)
		return (NULL);
	lst_top = ft_lstnew(lst->content, lst->content_size);
	if (lst_top == NULL)
		return (NULL);
	lst_tmp = lst_top;
	while (lst->next)
	{
		lst_tmp->next = ft_lstnew(lst->next->content, lst->next->content_size);
		if (lst_tmp->next == NULL)
			return (NULL);
		lst = lst->next;
		lst_tmp = lst_tmp->next;
	}
	return (lst_top);
}
