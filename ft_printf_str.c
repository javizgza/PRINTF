/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:49:20 by jazarago          #+#    #+#             */
/*   Updated: 2023/11/09 12:05:50 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

ft_printf_str(char *str)
{
	int	i;

	i = 0;
	if (str[i] == NULL)
	{
		write(1, &"(NULL)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
