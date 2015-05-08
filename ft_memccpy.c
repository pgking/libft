/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 14:43:29 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/19 15:29:02 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	i = 0;
	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dst;
	while (i < n)
	{
		ptr2[i] = ptr1[i];
		if (ptr2[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
