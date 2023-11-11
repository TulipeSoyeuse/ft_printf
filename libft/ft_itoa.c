/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:25:58 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/09 15:58:48 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*reverse(char *tmp, int end)
{
	char	*res;
	int		i;

	res = ft_calloc(end + 2, 1);
	if (!res)
		return (NULL);
	i = 0;
	while (end > -1)
		res[i++] = tmp[end--];
	return (res);
}

char	*ft_itoa(int n)
{
	char	temp[11];
	char	*res;
	int		i;
	long	nbr;

	nbr = n;
	i = 0;
	nbr = ABS(nbr);
	if (n == 0)
	{
		res = ft_calloc(2, 1);
		res[0] = '0';
		return (res);
	}
	while (nbr)
	{
		temp[i++] = 48 + (nbr % 10);
		nbr /= 10;
	}
	if (n < 0)
		temp[i++] = '-';
	return (reverse(temp, i - 1));
}
// int	main()
// {
// 	int a;

// 	a = -0;
// 	printf("base:%d\nres:%s\n", a, ft_itoa(a));
// }
