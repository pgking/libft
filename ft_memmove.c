/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 15:01:22 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/17 17:27:05 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;

	tmp = (char *)malloc(len * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	tmp = ft_memcpy(tmp, src, len);
	dst = ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
