/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:19:45 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/18 11:02:06 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	counter_dig;

	i = 0;
	counter_dig = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			counter_dig++;
		}
		i++;
	}
	if (counter_dig == i)
	{
		return (1);
	}
	return (0);
}
