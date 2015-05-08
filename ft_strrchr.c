/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 12:34:43 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/19 17:28:27 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = (ft_strlen(s));
	ptr = (char *)s;
	while (ptr[i] != c && *ptr && i >= 0)
		i--;
	if (ptr[i] != c)
		return (NULL);
	return (ptr + i);
}
