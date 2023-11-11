/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:48:36 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/09 16:08:54 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (src[i] && i < (int) dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = 0;
	return (ft_strlen(src));
}

/* int	main()
{
	char *dst;
	char src[]="0123456789";

	dst = NULL;

	dst = malloc(30);
	ft_bzero(dst, 30);
	ft_strlcpy(dst, "debut de str:", 13);
	printf("str:%s\n", dst);
	ft_strlcat(dst, src, 22);
	printf("res:%s\n", dst);
}
*/
