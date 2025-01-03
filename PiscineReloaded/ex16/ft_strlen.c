/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:29:06 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/12/21 15:29:10 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	contador;
	int	i;

	contador = 0;
	i = 0;
	while (str[i] != '\0')
	{
		contador++;
		i++;
	}
	return (contador);
}
/*
int main()
{ 
    ft_strlen("Sepronunciayan");
    return 0;
}*/
