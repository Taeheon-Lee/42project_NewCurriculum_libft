/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 00:32:48 by tlee              #+#    #+#             */
/*   Updated: 2020/04/17 01:44:56 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcut(char *str, char c)
{
	char	*rtnstr;
	size_t	str_len;
	size_t	i;

	if (!str)
		return (NULL);
	i = 0;
	str_len = ft_strlen(str);
	while (str[i])
	{
		if (str[i] == c)
		{
			i += 1;
			if (!(rtnstr = ft_strnew(str_len - i)))
				return (NULL);
			rtnstr = ft_strcpy(rtnstr, &(str[i]));
			free(str);
			return (rtnstr);
		}
		i++;
	}
	free(str);
	return (ft_strnew(0));
}
