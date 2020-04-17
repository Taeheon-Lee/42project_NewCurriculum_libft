/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 00:11:22 by tlee              #+#    #+#             */
/*   Updated: 2020/04/17 01:41:26 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

char	*ft_strncpy(char *dst, const char *src, size_t num)
{
	size_t i;

	i = 0;
	while (src[i])
	{
		if (i == num)
			return (dst);
		dst[i] = src[i];
		i++;
	}
	while (i < num)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
