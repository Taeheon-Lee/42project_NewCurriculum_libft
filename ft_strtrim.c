/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 02:10:14 by tlee              #+#    #+#             */
/*   Updated: 2020/04/16 21:50:38 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_loc_start(char const *s, int len_s, char const *set, int len_set)
{
	int	i;
	int	j;
	int cnt;

	i = -1;
	while (++i < len_s)
	{
		cnt = 0;
		j = -1;
		while (++j < len_set)
			if (s[i] == set[j])
				cnt++;
		if (cnt == 0)
			return (i);
	}
	return (i);
}

int		ft_loc_end(char const *s, int len_s, char const *set, int len_set)
{
	int	i;
	int cnt;

	while (--len_s >= 0)
	{
		cnt = 0;
		i = -1;
		while (++i < len_set)
			if (s[len_s] == set[i])
				cnt++;
		if (cnt == 0)
			return (len_s);
	}
	return (len_s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	int		i;
	size_t	len_s1;
	int		start;
	int		end;

	arr = (char *)malloc(sizeof(char));
	*arr = 0;
	if (!s1)
		return (arr);
	if (!set)
		return ((char *)s1);
	len_s1 = ft_strlen(s1);
	start = ft_loc_start(s1, len_s1, set, ft_strlen(set));
	end = ft_loc_end(s1, len_s1, set, ft_strlen(set));
	if (start >= end)
		return (arr);
	arr = (char *)malloc(sizeof(char) * (end - start + 2));
	i = 0;
	while (start <= end)
		arr[i++] = s1[start++];
	arr[i] = 0;
	return (arr);
}
