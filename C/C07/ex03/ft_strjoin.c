/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:07:59 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/27 21:56:33 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int sep_n;
	int i;
	int i2;
	int j;
	char *string;

	i = 0;
	i2 = 0;
	j = 0;
	if (size > 0)
		sep_n = size - 1;
	else
		sep_n = 0;	
	string = (char *)malloc((sep_n + size) * sizeof(char));
	if (!string)
		return ((void *) 0);
	while (i != (sep_n + size))
	{
		ft_strcpy(string, strs[i]);
		i++;
	}
	return (string);
}

#include <stdio.h>
int	main()
{
	char	**array;
	array = (char **)malloc(sizeof(char *) * 4);
	array[0] = "Ciao";
	array[1] = "come";
	array[2] = "stai";
	array[3] = "ragazzo";
	printf("Result [%s]", ft_strjoin(4, array, "{\\}"));
}