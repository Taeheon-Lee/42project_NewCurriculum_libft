/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 22:11:03 by tlee              #+#    #+#             */
/*   Updated: 2020/04/16 17:21:43 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*arr;
	int		cnt;

	cnt = ft_count_digit(n);
	if (n < 0)
	{
		if (!(arr = (char *)malloc(sizeof(char) * (cnt + 2))))
			return (NULL);
		arr[cnt + 1] = '\0';
	}
	else
	{
		if (!(arr = (char *)malloc(sizeof(char) * (cnt + 1))))
			return (NULL);
		arr[cnt] = '\0';
	}
	arr = ft_insert_nbr(arr, n, cnt);
	return (arr);
}
