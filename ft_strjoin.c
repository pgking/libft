/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 11:47:29 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/24 12:11:53 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strnew;
	size_t	len1;
	size_t	len2;

	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	else if (s2 == NULL)
		return (ft_strdup(s1));
	else if (s1 == NULL)
		return (ft_strdup(s2));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strnew = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (strnew == NULL)
		return (NULL);
	strnew = ft_strcpy(strnew, s1);
	return (ft_strcat(strnew, s2));
}
