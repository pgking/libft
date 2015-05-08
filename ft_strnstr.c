/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 10:59:22 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/25 16:39:14 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	if (len1 < n)
		n = len1;
	if (!*s2)
		return ((char *)s1);
	while ((i + len2) < (n + 1))
	{
		if (s1[i] == s2[0])
		{
			if (ft_strncmp((s1 + i), s2, len2) == 0)
				return ((char *)(s1 + i));
		}
		i++;
	}
	return (NULL);
}
