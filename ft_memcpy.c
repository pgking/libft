/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 14:05:55 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/17 13:03:10 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*tmp;
	char		*ptr;

	i = 0;
	tmp = (char *)dst;
	ptr = (char *)src;
	while (i < n)
	{
		tmp[i] = ptr[i];
		i++;
	}
	return (dst);
}
