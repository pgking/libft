/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 11:48:17 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/25 16:45:42 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_int(int j)
{
	int		i;

	if (j == 0)
		return (1);
	i = 0;
	if (j < 0)
		i++;
	while (j != 0)
	{
		j = j / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = size_int(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (n > 0)
		n = -n;
	else if (n < 0)
		str[0] = '-';
	else
		str[0] = '0';
	while (n != 0)
	{
		str[len] = '0' - (n % 10);
		n = n / 10;
		len--;
	}
	return (str);
}
