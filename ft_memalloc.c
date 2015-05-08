/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 13:37:44 by gmencier          #+#    #+#             */
/*   Updated: 2014/12/02 15:18:27 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (size == 0)
		return (NULL);
	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, 0, size);
	return (mem);
}
