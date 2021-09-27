/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 21:30:01 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/25 18:12:24 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < 46341)
	{
		if (nb % i == 0 && nb == i)
			return (1);
		else if (nb % i == 0 && nb != i)
			return (0);
		i++;
	}
	return (1);
}
