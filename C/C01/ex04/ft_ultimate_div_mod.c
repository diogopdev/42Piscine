/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:11:44 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/15 11:03:20 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a,	int	*b)
{
	int	result;
	int	remainder;

	result = *a / *b;
	remainder = *a % *b;
	*a = result;
	*b = remainder;
}
