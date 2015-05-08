/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 12:19:04 by gmencier          #+#    #+#             */
/*   Updated: 2014/12/02 15:16:06 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace_perso(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (isspace_perso(s[i]) == 1)
		i++;
	len = ft_strlen(s + i);
	if (len > 0)
	{
		while (isspace_perso(s[i + len - 1]) == 1)
			len--;
	}
	return (ft_strsub(s, i, len));
}
