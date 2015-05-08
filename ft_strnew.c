/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 14:45:20 by gmencier          #+#    #+#             */
/*   Updated: 2014/12/02 15:17:12 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem;

	mem = (char *)malloc(sizeof(char) * (size + 1));
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, '\0', (size + 1));
	return (mem);
}
