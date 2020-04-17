/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 00:19:12 by tlee              #+#    #+#             */
/*   Updated: 2020/04/17 01:41:12 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int			i;
	int			len;
	char		*arr;

	i = 0;
	len = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[len])
		len++;
	arr = (char *)malloc(sizeof(char) * len + 1);
	if (!arr)
		return (NULL);
	while (i < len)
	{
		arr[i] = f(s[i]);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
