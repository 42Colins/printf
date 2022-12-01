/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:47:59 by cprojean          #+#    #+#             */
/*   Updated: 2022/12/01 16:33:08 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *str, int size)
{
	int	index;

	index = 0;
	if (size == 0)
	{
		while (str[index])
		{
			write (1, &str[index], 1);
			index++;
		}
	}
	else
	{
		while (index <= size)
		{
			write (1, &str[index], 1);
			index++;
		}
	}
}
