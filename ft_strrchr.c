/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:53:14 by tlee              #+#    #+#             */
/*   Updated: 2020/04/16 17:26:52 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int		i;

	i = 0;
	while (s[i])
		i++;
	temp = (char *)s;
	while (i >= 0)
	{
		if (temp[i] == (char)c)
			return (temp + i);
		i--;
	}
	if (c == 0)
		return (temp + i);
	return (NULL);
}
