/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 22:11:03 by tlee              #+#    #+#             */
/*   Updated: 2020/04/18 15:34:59 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_digit(int n)
{
	int	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		cnt++;
		n = n / 10;
	}
	return (cnt);
}

char	*ft_insert_nbr(char *arr, int n, int size)
{
	int	i;

	i = size;
	arr[0] = '0';
	if (n == 0)
		return (arr);
	if (n == -2147483648)
	{
		arr[0] = '-';
		arr[1] = '2';
		n = 147483648;
	}
	else if (n < 0)
	{
		arr[0] = '-';
		n = n * (-1);
	}
	else
		i = size - 1;
	while (n != 0)
	{
		arr[i--] = (n % 10) + '0';
		n = n / 10;
	}
	return (arr);
}

char	*ft_itoa(int n)
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
