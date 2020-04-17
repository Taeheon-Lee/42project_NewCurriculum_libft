/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 06:13:18 by tlee              #+#    #+#             */
/*   Updated: 2020/04/16 17:23:36 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*arr;

	i = 0;
	arr = (unsigned char *)malloc(sizeof(unsigned char) * (count * size));
	if (!arr)
		return (NULL);
	while (i < (count * size))
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
