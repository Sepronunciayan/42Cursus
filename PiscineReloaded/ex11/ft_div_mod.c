/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 12:58:47 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/12/21 12:58:57 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	x;
	int	y;
	int	div; 
	int	mod;
	x = 5;
	y = 7;
	ft_div_mod(x, y, &div, &mod);
	printf("Resultado de la división:\n");
	printf("División: %d\n", div);
	printf("Módulo: %d\n", mod);
	return 0;
}*/
