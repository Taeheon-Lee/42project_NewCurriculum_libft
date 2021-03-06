/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:14:05 by tlee              #+#    #+#             */
/*   Updated: 2020/04/16 17:18:24 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < num)
	{
		if ((unsigned char)value == *p++)
			return ((void*)(p - 1));
		i++;
	}
	return (NULL);
}
