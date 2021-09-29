/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:53:05 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/29 11:41:07 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	str = (int *)malloc((max - min) * sizeof(int));
	if (!str)
		return ((void *) 0);
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int *ft_range(int min, int max);

// int	main()
// {
// 	printf("%d", ft_range(-1, 7)[0]);
// 	printf("%d", ft_range(-1, 7)[1]);
// 	printf("%d", ft_range(-1, 7)[2]);
// 	printf("%d", ft_range(-1, 7)[3]);
// 	printf("%d", ft_range(-1, 7)[4]);
// 	printf("%d", ft_range(-1, 7)[5]);
// 	printf("%d", ft_range(-1, 7)[6]);
// 	printf("%d", ft_range(-1, 7)[7]);
// }