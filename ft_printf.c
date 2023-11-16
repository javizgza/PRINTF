/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:29:38 by jazarago          #+#    #+#             */
/*   Updated: 2023/11/12 16:58:06 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_when(const char *case, va_list ap)
{
	int	i;

	i = 0;
	if (*case == 'c')
		i += ft_printf_char(va_arg(ap, int));
	else if (*case == 's')
		i += ft_printf_str(va_arg(ap, char *));
	else if (*case == 'p')
		i += ft_printf_ptr(va_arg(ap, unsigned long));
	else if (*case == 'd' || *input == 'i')
		i += ft_printf_int(va_arg(ap, int));
	else if (*case == 'u')
		i += ft_printf_unsignedint(va_arg(ap, unsigned int));
	else if (*case == 'x')
		i += ft_printf_hexa(va_arg(ap, unsigned int), 0);
	else if (*case == 'X')
		i += ft_printf_hexa(va_arg(ap, unsigned int), 1);
	else if (*case == '%')
		i += ft_printf_char('%');
	return (i);

