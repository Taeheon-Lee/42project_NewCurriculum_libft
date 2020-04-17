/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:35:38 by tlee              #+#    #+#             */
/*   Updated: 2020/04/17 00:26:29 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char c)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

char	*ft_make(char const *s, int len_word, int loc)
{
	char	*arr1;
	int		cnt_arr1;

	arr1 = (char *)malloc(sizeof(char) * (len_word + 1));
	cnt_arr1 = 0;
	while (cnt_arr1 < len_word)
	{
		arr1[cnt_arr1] = s[loc];
		loc++;
		cnt_arr1++;
	}
	arr1[cnt_arr1] = '\0';
	return (arr1);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		len_word;
	int		cnt_arr2;
	char	**arr2;

	i = 0;
	cnt_arr2 = 0;
	if (!s || !(arr2 = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			len_word = 0;
			i = i - 1;
			while (s[++i] != c && s[i])
				len_word++;
			arr2[cnt_arr2++] = ft_make(s, len_word, i - len_word);
		}
		else
			i++;
	}
	arr2[cnt_arr2] = 0;
	return (arr2);
}
