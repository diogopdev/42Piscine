/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:17:26 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/21 17:59:30 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_check_size(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (to_find[0] == '\0')
		return (str);
	if (ft_check_size(str) != 0)
	{
		while (str[i] != '\0')
		{
			if (str[i] == to_find[i2])
			{
				i2++;
				if (i2 == ft_check_size(to_find))
					return (&str[i - i2 + 1]);
			}
			else
				i2 = 0;
			i++;
		}
		return (0);
	}
	return (0);
}
