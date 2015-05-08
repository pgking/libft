/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 18:02:45 by gmencier          #+#    #+#             */
/*   Updated: 2015/05/08 19:07:37 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (alst && del)
	{
		if (*alst)
		{
			tmp = (*alst)->next;
			ft_lstdelone(alst, del);
			ft_lstdel(&tmp, del);
		}
	}
}
