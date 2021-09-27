/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:14:47 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/16 20:54:53 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char character)
{
	if (character >= '0' && character <= '9')
	{
		return (1);
	}
	if (character >= 'A' && character <= 'Z')
	{
		return (2);
	}
	if (character >= 'a' && character <= 'z')
	{
		return (3);
	}
	return (0);
}

char	*mini_letters(char	*mini)
{
	int	counter;

	counter = 0;
	while (mini[counter] != '\0')
	{
		if (check(mini[counter]) == 2)
		{
			mini[counter] = mini[counter] + 32;
		}
		counter++;
	}
	return (mini);
}	

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	mini_letters(str);
	while (str[i] != '\0')
	{
		if (check(str[i - 1]) == 2 || check(str[i - 1]) == 1)
		{
			if (check(str[i]) == 2)
			{
				str[i] = str[i] + 32;
			}
		}
		if (check(str[i - 1]) == 0)
		{
			if (check(str[i]) == 3)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
