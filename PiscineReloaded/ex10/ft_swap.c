/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 12:45:11 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/12/21 12:45:14 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 7;
	printf("Antes de ft_ft: %d %d\n", x, y);
	ft_swap(&x, &y);
	printf("Después de ft_ft: %d %d\n", x, y);
	return (0);
}*/
