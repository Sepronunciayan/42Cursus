/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 13:43:52 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/12/22 13:43:57 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		n;
	int		i;
	char	*copy;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	copy = (char *)malloc((n + 1) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int	main(void)
{
	char	*src;
	char	*copy;

	src = "sepronunciayan";
	copy = ft_strdup(src);

	printf("Source: %s\n", src);
	printf("Copy: %s\n", copy);

	free(copy);
	return (0);
}*/
