/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:45:48 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/15 10:58:16 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	value_h;
	int	value_l;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			value_h = tab[i];
			value_l = tab[i + 1];
			tab[i] = value_l;
			tab[i + 1] = value_h;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
