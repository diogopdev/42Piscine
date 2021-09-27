/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:01:28 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/21 10:31:59 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_str(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count_src;
	unsigned int	count_dest;

	i = 0;
	count_dest = ft_count_str(dest);
	count_src = ft_count_str(src);
	if (size <= count_dest)
		return (size + count_src);
	while ((src[i] != '\0') && ((count_dest + 1) < size))
	{
		dest[i] = src [i];
		count_dest++;
		i++;
	}
	dest[i] = '\0';
	return (ft_count_str(dest) + ft_count_str(&src[i]));
}
