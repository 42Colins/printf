/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa_maj.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:43:42 by cprojean          #+#    #+#             */
/*   Updated: 2022/12/03 23:46:02 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_hexa_maj(unsigned int number, int *count)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (number >= 16)
	{
		ft_convert_hexa_maj(number / 16, count);
		ft_putchar(hexa[number % 16], count);
	}
	else
		ft_putchar(hexa[number % 16], count);
}
