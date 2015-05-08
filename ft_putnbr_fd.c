/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 14:48:50 by gmencier          #+#    #+#             */
/*   Updated: 2014/11/25 16:46:06 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_pos_fd(int n, int fd)
{
	if (n >= 10)
	{
		ft_putnbr_pos_fd(n / 10, fd);
		ft_putnbr_pos_fd(n % 10, fd);
	}
	else
		ft_putchar_fd((n + '0'), fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		ft_putnbr_pos_fd(n, fd);
	}
}
