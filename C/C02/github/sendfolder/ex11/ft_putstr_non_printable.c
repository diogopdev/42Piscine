/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:15:41 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/18 15:34:07 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hexa[16];

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			ft_putchar('\\');
			ft_putchar(hexa[str[i] / 16]);
			ft_putchar(hexa[str[i] % 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
