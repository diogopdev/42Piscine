/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:18:14 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/26 20:21:39 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void) argc;
	while (argv[0][i])
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
