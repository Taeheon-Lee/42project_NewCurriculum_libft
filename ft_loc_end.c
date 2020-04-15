/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loc_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 01:48:07 by tlee              #+#    #+#             */
/*   Updated: 2020/04/15 06:05:29 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_loc_end(char const *s, int len, char const *set, size_t n)
{
	size_t	i;

	i = -1;
	while (--len >= 0)
	{
		while (++i < n)
			if (s[len] != set[i])
				break ;
		i = -1;
	}
	return (len);
}
