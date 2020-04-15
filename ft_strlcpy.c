/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 01:17:43 by tlee              #+#    #+#             */
/*   Updated: 2020/04/15 01:17:43 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*buffer;

	i = -1;
	buffer = (char *)malloc(sizeof(char) * ft_strlen(src));
	while (src[++i])
	{
		if (i == dstsize - 1)
			break ;
		buffer[i] = src[i];
	}
	buffer[i] = 0;
	i = -1;
	while (buffer[++i])
		dst[i] = buffer[i];
	return (ft_strlen(src));
}
