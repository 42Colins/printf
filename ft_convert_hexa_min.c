/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa_min.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:43:48 by cprojean          #+#    #+#             */
/*   Updated: 2022/12/01 17:49:45 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*init_array(int number);
char	*fill_hexa(int number, char *str);

char	*ft_convert_hexa_min(int number)
{
	char	*str;

	str = init_array(number);
	str = fill_hexa(number, str);
	return (str);
}

char	*init_array(int number)
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

char	*fill_hexa(int number, char *str)
{
	char	*hexa;
	int		mod;
	int		index;

	index = 0;
	hexa = "0123456789ABCDEF";
	if (number < 0)
	{
		str[0] = '-';
		fill_hexa(number * -1, str);
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
	return (str);
}
