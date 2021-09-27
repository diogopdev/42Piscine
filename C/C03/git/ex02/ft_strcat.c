/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:46:12 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/21 10:26:46 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i_source;

	i = 0;
	i_source = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i_source] != '\0')
	{
		dest[i] = src[i_source];
		i++;
		i_source++;
	}
	dest[i] = '\0';
	return (dest);
}
