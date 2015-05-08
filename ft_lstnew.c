/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 16:38:30 by gmencier          #+#    #+#             */
/*   Updated: 2015/05/08 21:20:28 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list) * 1);
	if (!ptr)
		return (NULL);
	if (content == NULL)
	{
		ptr->content = NULL;
		ptr->content_size = 0;
		ptr->next = NULL;
	}
	else
	{
		ptr->content = (void *)content;
		ptr->content_size = content_size;
		ptr->next = NULL;
	}
	return (ptr);
}
