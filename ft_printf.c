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

static int	ft_when(const char *format, va_list args)
{
	int	i;

	i = 0;
	if (*format == 'c')
		i += ft_printf_char(va_arg(args, int));
	else if (*format == 's')
		i += ft_printf_str(va_arg(args, char *));
	else if (*format == 'p')
		i += ft_printf_ptr(va_arg(args, unsigned long));
	else if (*format == 'd' || *format == 'i')
		i += ft_printf_int(va_arg(args, int));
	else if (*format == 'u')
		i += ft_printf_unsignedint(va_arg(args, unsigned int));
	else if (*format == 'x')
		i += ft_printf_hexa(va_arg(args, unsigned int), 0);
	else if (*format == 'X')
		i += ft_printf_hexa(va_arg(args, unsigned int), 1);
	else if (*format == '%')
		i += ft_printf_char('%');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;

	i = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			i = i + ft_when(format + 1, args);
			format++;
		}
		else
			i = i + ft_printf_char(*case);
		format++;

	}
	va_end(args);
	return (i);
}
