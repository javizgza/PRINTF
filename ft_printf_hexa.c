/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:04:42 by jazarago          #+#    #+#             */
/*   Updated: 2023/11/12 16:09:14 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

ft_printf_hexa(int n, int capital)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i = i + ft_printf_hexa(n / 16, capital);
	}
	if (n % 16 < 10)
	{
		i = i + ft_printf_hexa(n % 16, capital);
	}
	else if (capital)
	{
		i = i + ft_printf_hexa(n % 16 + 'A');
	}
	else
	{
		i = i + ft_printf_hexa(n % 16 + 'a');
	}
	return (i);
}
