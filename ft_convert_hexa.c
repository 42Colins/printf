/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:08:38 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/29 18:00:03 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_convert_hexa(int number, char *str)
{
	char	*hexa;
	char	dash;
	int		mod;
	int		index;

	mod = 0;
	index = 0;
	hexa = "0123456789ABCDEF";
	dash = '-';
	if (number < 0)
	{
		str[0] = dash;
		ft_convert_hexa(number * -1, str);
	}
	while (number > 16)
	{
		mod = number % 16;
		number = number / 16;
		if (str[0] == '-')
			str[index + 1] = hexa[mod];
		else
			str[index] = hexa[mod];
		index++;
	}
}
