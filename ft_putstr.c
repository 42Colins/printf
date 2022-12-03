/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:47:59 by cprojean          #+#    #+#             */
/*   Updated: 2022/12/02 15:59:50 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
