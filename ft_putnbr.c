/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:26:47 by cprojean          #+#    #+#             */
/*   Updated: 2022/12/01 14:59:54 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_next_putnbr(int x)
{
	char	mod;

	if (x > 9)
	{
		mod = x % 10 + 48;
		x = x / 10;
		ft_next_putnbr(x);
		write (1, &mod, 1);
	}
	else if ((x >= 0) && (x < 10))
	{
		mod = (x % 10) + 48;
		write(1, &mod, 1);
	}
}

void	ft_putnbr(int x)
{
	char	dash;

	dash = '-';
	if (x == -2147483648)
	{
		write (1, &dash, 1);
		write (1, "2147483648", 10);
	}
	else if (x < 0)
	{
		write (1, &dash, 1);
		ft_putnbr(x * -1);
	}
	ft_next_putnbr(x);
}
