/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:36:04 by cprojean          #+#    #+#             */
/*   Updated: 2022/12/01 17:46:21 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *array, ...)
{
	size_t	index;
	va_list	variadic;

	index = 0;
	va_start(variadic, array);
	while (array[index])
	{
		if (array[index] != '%')
			write(1, &array[index], 1);
		if (array[index] == '%' && array[index + 1] != '\0')
		{
			which_varia(array, variadic, index);
			index++;
		}
		index++;
	}
	va_end(variadic);
	return (index);
}
