/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:58:54 by jazarago          #+#    #+#             */
/*   Updated: 2023/11/19 18:10:37 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_print_char(int c);
int	ft_print_int(int n);
int	ft_print_str(char *str);
int	ft_print_unsignedint(unsigned int n);
int	ft_print_ptr(unsigned long ptr);
int	ft_print_hexa(unsigned int n, int capital);

#endif
