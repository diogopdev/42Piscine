/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:24:29 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/14 14:43:51 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	number[2];

	number[0] = 0;
	while (number[0] <= 99)
	{
		number[1] = number[0] + 1;
		while (number[1] <= 99)
		{
			put_char('0' + number[0] / 10);
			put_char('0' + number[0] % 10);
			put_char(' ');
			put_char('0' + number[1] / 10);
			put_char('0' + number[1] % 10);
			if (number[0] == 98 && number[1] == 99)
			{
				break ;
			}
			put_char(',');
			put_char(' ');
			number[1] = number[1] + 1;
		}
		number[0] = number[0] + 1;
	}
}
