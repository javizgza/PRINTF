/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:19:16 by jazarago          #+#    #+#             */
/*   Updated: 2023/11/12 17:34:00 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_ptr(unsigned long ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
		return (ft_printf_str(NIL));
	if (ptr < 16)
		i = i + ft_printf_str("0x");
	if (ptr >= 16)
		i = i + ft_printf_ptr(ptr / 16);
	i = i + ft_printf_hexa(ptr % 16, 0);
	return (i);
}
