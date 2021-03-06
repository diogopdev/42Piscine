/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:06:38 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/29 11:42:39 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(1 * sizeof(src));
	if (!dest)
		return ((void *) 0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// char *ft_strdup(char *src);

// int	main(void)
// {
// 	char *src = ft_strdup("Hello World123!!!");
// 	printf("Copy: %s", src);
// }