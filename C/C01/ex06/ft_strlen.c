/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:07:50 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/14 18:42:40 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[i] != 0)
	{
		i++;
		counter++;
	}	
	return (counter);
}
