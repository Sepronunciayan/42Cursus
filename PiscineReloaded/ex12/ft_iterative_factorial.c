/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:47:57 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/12/20 18:49:15 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	mul;

	i = 1;
	mul = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (i <= nb)
		{
			mul *= i;
			i++;
		}
	}
	return (mul);
}
/*
int main (){
    printf("%d", ft_iterative_factorial(-9));
    return 0;
}*/
