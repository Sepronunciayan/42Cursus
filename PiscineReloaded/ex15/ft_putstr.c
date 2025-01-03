/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:18:22 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/12/21 15:18:48 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char str);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
/*
int main()
{ 
    char ptr[] = "SePronunciaYan";
    char *str = ptr;
    
    ft_putstr(str);
    return 0;
}

void ft_putchar(char str)
{
	write(1, &str, 1);
}*/
