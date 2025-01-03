/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:52:57 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/12/21 11:54:01 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char posneg);

void	ft_is_negative(int n)
{
	char	posneg;

	if (n >= 0)
	{
		posneg = 'P';
		ft_putchar(posneg);
	}
	else
	{
		posneg = 'N';
		ft_putchar(posneg);
	}
}
/*int	main (void)
{
	ft_is_negative(-5);
	return (0);
}

void	ft_putchar(char	posneg)
{
	write(1, &posneg, 1);
}*/
