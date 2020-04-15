/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 02:53:49 by tlee              #+#    #+#             */
/*   Updated: 2020/04/15 02:53:49 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		cnt;

	cnt = 0;
	tmp = lst;
	if (!lst)
		return (0);
	while (tmp)
	{
		cnt++;
		tmp = tmp->next;
	}
	return (cnt);
}
