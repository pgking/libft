/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:25:25 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/17 12:33:08 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*strbis;

	strbis = (char *)malloc(sizeof(*strbis) * (ft_strlen(s1) + 1));
	if (strbis == NULL)
		return (NULL);
	return (ft_strcpy(strbis, s1));
}
