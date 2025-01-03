/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:58:15 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/12/27 15:59:51 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include libft.h

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;

	min = 2;
	max = 8;
	array = ft_range(min, max);
	if (!array)
		return (1);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", array[i]);
		i++;
	}
	free(array);
	return (0);
}*/
