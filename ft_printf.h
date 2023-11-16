/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:58:54 by jazarago          #+#    #+#             */
/*   Updated: 2023/11/09 12:06:20 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF.H

# include <unistd.h>
# include <stdio.h>

int	ft_print_char(int c);
int	ft_print_int(int n);
int	ft_printf_str(char *str);
int	ft_printf_unsignedint(unsigned int n);
int	ft_printf_ptr(unsigned long ptr)
int	ft_printf_hexa(int n, int capital)

#endif
