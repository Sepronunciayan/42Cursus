/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:38:40 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/12/27 16:39:05 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*int	ft_count(char *str);*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}
/*
int	ft_count(char *str)
{
	if(str[0] == 'B' || str[0] == 'b')
	{
		return (1);   
	}
	else
	{
		return (0);   
	}
}

int main ()
{
  char *list[] = {"oktoroc","miaw","bimba","rocket","lanstrong","brand",NULL};
   
    int result = ft_count_if(list, &ft_count);
    printf("Total elementos que cumplen la condición: %d\n", result);
    return (0);
}*/
