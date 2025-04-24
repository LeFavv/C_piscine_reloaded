/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:34:23 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/24 16:47:14 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	c;

	if (argc != 2)
	{
		if (argc < 2)
			write (2, "File name missing.\n", 19);
		else
			write (2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write (2, "Cannot read file.\n", 18);
		return (1);
	}
	while (read(fd, &c, 1) > 0)
		write (1, &c, 1);
	close(fd);
	return (0);
}
