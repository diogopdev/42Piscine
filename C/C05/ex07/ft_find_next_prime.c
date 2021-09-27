/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:05:51 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/26 10:45:22 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (i);
	while (i < 46341)
	{
		if (nb % i == 0)
		{
			if (i == nb)
				return (nb);
			else
			{
				nb++;
				i = 1;
			}	
		}
		i++;
	}
	return (nb);
}