/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:22:36 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/25 18:57:04 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	i2;

	i = argc - 1;
	while (i > 0)
	{
		i2 = 0;
		while (argv[i][i2] != '\0')
		{
			ft_putchar(argv[i][i2]);
			i2++;
		}
		ft_putchar('\n');
		i--;
	}
}
