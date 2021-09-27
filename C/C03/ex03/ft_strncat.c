/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:10:51 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/21 10:28:42 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i_source;

	i = 0;
	i_source = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i_source] != '\0' && i_source < nb)
	{
		dest[i] = src[i_source];
		i_source++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
