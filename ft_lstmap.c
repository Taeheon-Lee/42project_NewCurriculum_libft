/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 22:40:09 by tlee              #+#    #+#             */
/*   Updated: 2020/04/16 22:57:49 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap	(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*temp;

	if (!lst)
		return (NULL);
	temp = f(lst->content);
	if (!temp)
		del(temp);
	new = (t_list *)malloc(sizeof(t_list));
	new->content = temp;
	new->next = ft_lstmap(lst->next, f, del);
	return (new);
}
/*
** lst is a pointer, so the sizeof(lst) is 8bites.
** If you want to need create 'fresh' list like lst, you have to use
** sizeof(t_list) instead of sizeof(lst), when you use malloc.
*/
