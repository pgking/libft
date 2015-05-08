/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 15:25:38 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/20 14:40:24 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	tmp;
	unsigned char	*ptr;

	if (s == NULL)
		return (NULL);
	i = 0;
	tmp = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (ptr[i] == tmp)
			return ((void *)(s + i));
		n--;
		i++;
	}
	return (NULL);
}
