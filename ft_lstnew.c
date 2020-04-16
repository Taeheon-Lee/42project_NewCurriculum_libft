/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 20:17:31 by tlee              #+#    #+#             */
/*   Updated: 2020/04/16 06:34:16 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*new_list;

	if (!(new_list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(new_list->content = (void*)malloc(sizeof(content))))
		{
			free(new_list);
			return (NULL);
		}
		new_list->content = ft_memcpy(new_list->content, content, \
				sizeof(content));
	}
	else
		new_list->content = NULL;
	new_list->next = NULL;
	return (new_list);
}
