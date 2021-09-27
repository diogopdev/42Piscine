/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:37:31 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/18 15:32:27 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	counter_alph;

	i = 0;
	counter_alph = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			counter_alph++;
		}
		i++;
	}
	if (counter_alph == i)
	{
		return (1);
	}
	return (0);
}
