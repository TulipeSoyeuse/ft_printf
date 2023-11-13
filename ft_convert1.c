/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:22:01 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/13 11:58:23 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *s)
{
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	print_ptr(uintptr_t ptr)
{
	write(1,"0x",2);
	return (putnbr_hexa(ptr, "0123456789abcdef") + 4);
}

int	print_int(int n)
{
	return (print_deci(n));
}

int	print_deci(int n)
{
	char	*s;
	int		len;

	s = ft_itoa(n);
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (len);
}

int	print_unsigned_int(unsigned int n)
{
	char	*s;
	int		len;


	s = ft_itoa_unsigned(n);
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (len);
}
