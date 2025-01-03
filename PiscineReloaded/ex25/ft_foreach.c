/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:30:40 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/12/27 16:31:01 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include libft.h

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void ft_putnbr(int n)
{
    printf("%d", n);
}

int main()
{   
    int length;
    int tab[] = {1,2,3,4,5,6,7,8,9};

    length = 0;
    while (tab[length] <= 9)
    {
        length++;
    }
    ft_foreach(tab, length, &ft_putnbr);
    return 0;
   
}*/
