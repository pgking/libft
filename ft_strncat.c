/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:01:15 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/14 12:50:44 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *sames1;

	sames1 = s1;
	while (*sames1 != '\0')
	{
		sames1++;
	}
	while (*s2 != '\0' && n > 0)
	{
		*sames1 = *s2;
		sames1++;
		s2++;
		n--;
	}
	*sames1 = '\0';
	return (s1);
}
