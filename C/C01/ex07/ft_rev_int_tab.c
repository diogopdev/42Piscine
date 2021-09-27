/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reb_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:30:59 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/15 10:55:38 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	valor;

	i = 0;
	while (i < size / 2)
	{
		valor = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = valor;
		i++;
	}
}