/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:25:42 by jazarago          #+#    #+#             */
/*   Updated: 2023/11/20 09:38:45 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
		return (ft_print_str("0x0"));
	if (ptr < 16)
		i = i + ft_print_str("0x");
	if (ptr >= 16)
		i = i + ft_print_ptr(ptr / 16);
	i = i + ft_print_hexa(ptr % 16, 0);
	return (i);
}
