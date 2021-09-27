/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:24:50 by jguerrei          #+#    #+#             */
/*   Updated: 2021/09/27 14:00:43 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *arr;

	i = 0;
	arr = (int *)malloc((max - min) * (int));
	if (arr == NULL)
		return (0);
	if (min >= max)
		return (0);
	
}