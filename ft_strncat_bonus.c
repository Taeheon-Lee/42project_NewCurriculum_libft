/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 00:10:03 by tlee              #+#    #+#             */
/*   Updated: 2020/04/17 01:41:21 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

char	*ft_strncat(char *dst, char *src, size_t num)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		if (j == num)
			break ;
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (dst);
}
