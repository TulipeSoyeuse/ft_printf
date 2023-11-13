/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:18:24 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/13 11:06:02 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef printf_h
# define printf_h
# include "libft/libft.h"
# include <stdarg.h>
int		ft_printf(const char *, ...);
int		putnbr_hexa(unsigned long long nb, char *base);
char	*ft_itoa_unsigned(unsigned int n);
int		print_str(char *s);
int		print_ptr(uintptr_t ptr);
int		print_int(int n);
int		print_deci(int n);
int		print_unsigned_int(unsigned int n);
int		print_hexa_lower(int n);
int		print_hexa_upper(int n);
#endif
