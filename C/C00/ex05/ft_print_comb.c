/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 21:05:04 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/14 15:27:13 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	while (number[0] <= '7')
	{
		number[1] = number[0] + 1 ;
		while (number[1] <= '8')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				write(1, &number, 3);
				if (!(number[0] == '7' && number[1] == '8' && number[2] == '9'))
				{
					write(1, ", ", 2);
				}
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}
