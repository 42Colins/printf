/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_varia.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:48:03 by cprojean          #+#    #+#             */
/*   Updated: 2022/12/02 15:59:50 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	which_varia(const char *array, va_list variadic, size_t index)
{
	char	dash;

	dash = '-';
	if (array[index + 1] == 'c')
		ft_putchar(va_arg(variadic, int));
	if (array[index + 1] == 's')
		ft_putstr(va_arg(variadic, char *), 0);
	if (array[index + 1] == 'p')
		ft_putstr(ft_convert_hexa_maj(va_arg(variadic, int)), 0);
	if (array[index + 1] == 'd')
		ft_putnbr(va_arg(variadic, int));
	if (array[index + 1] == 'i')
		ft_putnbr(va_arg(variadic, int));
	if (array[index + 1] == 'u')
		ft_putnbr(va_arg(variadic, int));
	if (array[index + 1] == 'x')
		ft_putstr(ft_convert_hexa_min(va_arg(variadic, int)), 0);
	if (array[index + 1] == 'X')
		ft_putstr(ft_convert_hexa_maj(va_arg(variadic, int)), 0);
	if (array[index + 1] == '%')
		write(1, &dash, 1);
}
