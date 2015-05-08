/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:12:42 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/20 14:21:33 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	i = 0;
	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	while (ptr1[i] && ptr2[i] && (n - 1) > 0 && ptr1[i] == ptr2[i])
	{
		n--;
		i++;
	}
	return (ptr1[i] - ptr2[i]);
}
