/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:16:04 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/12/21 14:16:10 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main() {
	char str1[] = "hell71";
	char str2[] = "hell78";
	
	printf("st1: %s\n", str1);
	printf("st2: %s\n", str2);
	printf("distancia entre caracteres: %d\n", ft_strcmp(str1, str2));

	return 0;
}*/
