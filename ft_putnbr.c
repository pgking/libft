/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 13:41:54 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/25 16:43:56 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_pos(int n)
{
	if (n >= 10)
	{
		ft_putnbr_pos(n / 10);
		ft_putnbr_pos(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void		ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		ft_putnbr_pos(n);
	}
}
