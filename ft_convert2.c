/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:32:46 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/11 19:44:37 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_hexa_lower(int n)
{
	return (putnbr_hexa(n, "0123456789abcdef"));
}

int print_hexa_upper(int n)
{
	return (putnbr_hexa(n, "0123456789ABCDEF"));
}
