/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:07:59 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/28 21:04:57 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_fullsize(char **strs, int size, char *sep)
{
	int	i;
	int	fullsize;

	i = 0;
	fullsize = 0;
	while (i < size)
	{
		fullsize = fullsize + ft_strlen(strs[i]);
		i++;
	}
	return (fullsize * ft_strlen(sep));
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)malloc(sizeof(char) * ft_fullsize(strs, size, sep));
	if (!string)
		return ((void *) 0);
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (i != size)
	{
		ft_strcat(string, strs[i]);
		if (i < size - 1)
			ft_strcat(string, sep);
		i++;
	}
	return (string);
}

// #include <stdio.h>
// #include <stdlib.h>

// char *ft_strjoin(int size, char **strs, char *sep);

// int	main()
// {
// 	char	**array;

// 	array = (char **)malloc(sizeof(char *) * 4);
// 	array[0] = "Hello";
// 	array[1] = "Dude!!!";
// 	array[2] = "We love";
// 	array[3] = "Pulgamecanica!!!";

// 	printf("Result <%s>", ft_strjoin(4, array, "-"));
// }
