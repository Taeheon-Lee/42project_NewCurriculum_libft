/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:36:12 by tlee              #+#    #+#             */
/*   Updated: 2020/04/16 17:17:00 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char c;

	if (n == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(n * (-1));
	}
	else
	{
		if (n >= 10)
			ft_putnbr(n / 10);
		c = (n % 10) + '0';
		write(1, &c, 1);
	}
}
