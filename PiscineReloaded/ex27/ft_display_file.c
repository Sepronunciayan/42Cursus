/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:46:27 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/12/27 16:46:41 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer[1024];
	int		bytes_read;

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		bytes_read = read(fd, buffer, sizeof(buffer));
		if (fd == -1 || bytes_read == -1)
			write(1, "Cannot read file.\n", 18);
		while (bytes_read > 0)
		{
			write(1, buffer, bytes_read);
			bytes_read = read(fd, buffer, sizeof(buffer));
		}
		close(fd);
	}
	return (0);
}
