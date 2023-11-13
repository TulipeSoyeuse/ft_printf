/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:17:07 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/13 12:44:20 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printf_case(const char *str, va_list *a_list)
{
	if (*str == 'c')
		return(print_char(va_arg(*a_list, int)));
	if (*str == 's')
		return (print_str(va_arg(*a_list, char *)));
	if (*str == 'p')
		return (print_ptr(va_arg(*a_list, uintptr_t)));
	if (*str == 'd')
		return (print_deci(va_arg(*a_list, int)));
	if (*str == 'i')
		return (print_int(va_arg(*a_list, int)));
	if (*str == 'u')
		return (print_unsigned_int(va_arg(*a_list, unsigned int)));
	if (*str == 'x')
		return (print_hexa_lower(va_arg(*a_list, int)));
	if (*str == 'X')
		return (print_hexa_upper(va_arg(*a_list, int)));
	if (*str == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

static int	ft_convert(const char *str, va_list *a_list)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str != '%' || *(str - 1) == '\\')
		{
			ft_putchar_fd(*str, 1);
			count++;
		}
		else
		{
			str++;
			count += printf_case(str, a_list);
		}
		str++;
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	a_list;
	int	res;

	va_start(a_list, str);
	res = ft_convert(str, &a_list);
	va_end(a_list);
	return (res);
}
