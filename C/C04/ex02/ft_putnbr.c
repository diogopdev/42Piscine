/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:33:33 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/24 12:53:10 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb >= -2147483647)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb == -2147483648)
	{
		ft_putnbr(-2147);
		ft_putnbr(483648);
	}	
}
