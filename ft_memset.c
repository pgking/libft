/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:04:15 by gmencier          #+#    #+#             */
/*   Updated: 2014/12/02 15:11:46 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)b;
	if (b == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
