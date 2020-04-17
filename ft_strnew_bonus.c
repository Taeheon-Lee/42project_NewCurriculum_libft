/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 00:20:42 by tlee              #+#    #+#             */
/*   Updated: 2020/04/17 01:41:40 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*arr;

	i = 0;
	arr = (char *)malloc(sizeof(char) * size + 1);
	if (!arr)
		return (NULL);
	while (i <= size)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
