/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:45:23 by tlee              #+#    #+#             */
/*   Updated: 2020/04/16 18:55:01 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sum;

	i = 0;
	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	sum = ft_strlen(dst) + ft_strlen(src);
	dstsize -= ft_strlen(dst);
	while (*dst)
		dst++;
	while (i < dstsize - 1 && *src)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = 0;
	return (sum);
}
