/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 11:03:59 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/25 16:30:04 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*strnew;
	size_t	i;

	if (s == NULL)
		return (NULL);
	strnew = (char *)malloc((len + 1) * sizeof(char));
	if (strnew == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		strnew[i] = s[start + i];
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
