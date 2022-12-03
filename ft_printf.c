/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:36:04 by cprojean          #+#    #+#             */
/*   Updated: 2022/12/03 19:50:16 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *array, ...)
{
	size_t	index;
	va_list	variadic;
	int		count;

	count = 0;
	index = 0;
	va_start(variadic, array);
	while (array[index])
	{
		if (array[index] != '%')
			count += write(1, &array[index], 1);
		if (array[index] == '%' && array[index + 1] != '\0')
		{
			which_varia(array, variadic, &index, &count);
			if (count == -1)
				return (-1);
			index++;
		}
		index++;
	}
	va_end(variadic);
	return (count);
}
