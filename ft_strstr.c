/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 13:10:37 by gmencier          #+#    #+#             */
/*   Updated: 2015/01/22 11:06:00 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_cmp_start_strs(const char *s1, const char *s2)
{
	int		len1;
	int		len2;
	int		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len2 > len1)
		return (0);
	else
	{
		i = 0;
		while (i < len2)
		{
			if (s1[i] != s2[i])
				return (0);
			else
				i++;
		}
		return (1);
	}
}

char			*ft_strstr(const char *s1, const char *s2)
{
	char	*ptr1;
	int		len1;
	int		len2;
	int		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr1 = (char *)s1;
	i = 0;
	if (s2 == NULL)
		return (ptr1);
	while (i <= len1 - len2)
	{
		if (ft_cmp_start_strs(s1 + i, s2) == 1)
			return (ptr1 + i);
		else
			i++;
	}
	return (NULL);
}
