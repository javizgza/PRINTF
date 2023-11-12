/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsignedint.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:07:43 by jazarago          #+#    #+#             */
/*   Updated: 2023/11/09 12:05:28 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

ft_printf_unsignedint(unsigned int n)
{
	int i;

	i = 0;
	if (n >= 10)
	{
		i = i + ft_printf_unsignedint(n / 10);
	}
	i = i + ft_printf_char(n % 10 + '0');
	return (i);
}
