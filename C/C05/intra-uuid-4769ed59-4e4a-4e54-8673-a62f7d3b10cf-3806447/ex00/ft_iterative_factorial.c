/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:02:29 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/22 14:39:32 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	i = nb;
	total = nb;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (i != 1)
	{
		i--;
		total = total * i;
	}
	return (total);
}
