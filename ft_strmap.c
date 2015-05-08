/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 15:30:27 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/22 17:56:58 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*newstr;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	newstr = (char *)malloc((len + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		newstr[i] = f(s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
