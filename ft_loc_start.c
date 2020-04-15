/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loc_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 01:47:20 by tlee              #+#    #+#             */
/*   Updated: 2020/04/15 05:42:34 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_loc_start(char const *s, size_t len, char const *set, size_t n)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	while (++i < len)
	{
		while (++j < n)
			if (s[i] != set[j])
				break ;
		j = -1;
	}
	return (i);
}
