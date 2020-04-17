/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 06:23:33 by tlee              #+#    #+#             */
/*   Updated: 2020/04/16 19:45:46 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*buffer;
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (!src || !dst)
		return (0);
	else if (!dstsize)
		return (len);
	i = -1;
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	while (++i < dstsize - 1 && src[i])
		buffer[i] = src[i];
	buffer[i] = 0;
	i = -1;
	while (buffer[++i])
		dst[i] = buffer[i];
	dst[i] = 0;
	free(buffer);
	return (len);
}
