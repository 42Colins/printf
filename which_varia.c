/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_varia.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:48:03 by cprojean          #+#    #+#             */
/*   Updated: 2022/12/03 19:54:26 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	which_varia(const char *array, va_list variadic, size_t *index, int *count)
{
	char	dash;

	dash = '%';
	if (array[*index + 1] == 'c')
		ft_putchar(va_arg(variadic, int), count);
	else if (array[*index + 1] == 's')
		ft_putstr(va_arg(variadic, char *), count);
	else if (array[*index + 1] == 'p')
	{
		ft_putstr("0x", count);
		*count = *count + 2;
		ft_print_address(va_arg(variadic, size_t), count);
	}
	else if ((array[*index + 1] == 'd') || (array[*index + 1] == 'i')
		|| (array[*index + 1] == 'u'))
		ft_putnbr(va_arg(variadic, int), count);
	else if (array[*index + 1] == 'x')
		ft_convert_hexa_min(va_arg(variadic, size_t), count);
	else if (array[*index + 1] == 'X')
		ft_convert_hexa_maj(va_arg(variadic, size_t), count);
	else if (array[*index + 1] == '%')
	{
		write(1, &dash, 1);
		*count = *count + 1;
	}
}
