/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:24:50 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/29 11:37:41 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc((sizeof(int)) * (max - min));
	if (*range == NULL)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (size);
}

// #include <stdio.h>
// #include <stdlib.h>

// int ft_ultimate_range(int **range, int min, int max);

// int	main(void)
// {
// 	int *array;
// 	int	size;
// 	int	i;
// 	int a = -50;
// 	int b = 210;
// 	size = ft_ultimate_range(&array, a, b);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d, ", array[i]);
// 		i++;
// 	}
// }