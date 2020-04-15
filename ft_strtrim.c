/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 02:10:14 by tlee              #+#    #+#             */
/*   Updated: 2020/04/15 05:45:07 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	int		i;
	size_t	temp;
	int		start;
	int		end;

	arr = (char *)malloc(sizeof(char));
	if (!arr)
		return (NULL);
	*arr = 0;
	if (!s1)
		return (arr);
	temp = ft_strlen(s1);
	start = ft_loc_start(s1, temp, set, ft_strlen(set));
	end = ft_loc_end(s1, temp, set, ft_strlen(set));
	if (start >= end)
		return (arr);
	arr = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!arr)
		return (NULL);
	i = -1;
	while (++start - 1 <= end)
		arr[++i] = s1[start - 1];
	arr[++i] = 0;
	return (arr);
}
