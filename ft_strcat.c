/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:44:57 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/14 12:36:26 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*sames1;
	char	*sames2;

	sames1 = s1;
	sames2 = (char *)s2;
	while (*sames1 != '\0')
	{
		sames1++;
	}
	while (*sames2 != '\0')
	{
		*sames1 = *sames2;
		sames1++;
		sames2++;
	}
	*sames1 = '\0';
	return (s1);
}
