/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa_maj.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:43:42 by cprojean          #+#    #+#             */
/*   Updated: 2022/12/02 15:59:50 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*init_array_maj(size_t number);
char	*fill_hexa_maj(size_t number, char *str);

char	*ft_convert_hexa_maj(int number)
{
	char	*str;

	str = init_array_maj(number);
	str = fill_hexa_maj(number, str);
	return (str);
}

char	*init_array_maj(size_t number)
{
	int		index;
	char	*str;

	index = 0;
	if (number < 0)
	{
		number = number * -1;
		index++;
	}
	while (number > 16)
	{
		index++;
	}
	str = malloc(sizeof(int) * index);
	return (str);
}

char	*fill_hexa_maj(size_t number, char *str)
{
	char	*hexa;
	int		mod;
	int		index;

	index = 0;
	hexa = "0123456789ABCDEF";
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
	return (str);
}
