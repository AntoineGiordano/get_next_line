/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/24 16:00:31 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/24 16:00:32 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		fd2;
	int		ret;
	char	*line;

	line = NULL;
	if (argc == 1)
		fd = 1;
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (get_next_line(fd, &line) > 0)
		{
			ft_putstr("Main line : ");
			ft_putendl(line);
			ft_putstr("-------------\n");
			ft_strdel(&line);
		}
		ret = get_next_line(fd, &line);
		ft_putendl(line);
		ft_strdel(&line);
		ret = get_next_line(fd, &line);
		ft_putendl(line);
		ft_strdel(&line);
		ret = get_next_line(fd, &line);
		ft_putendl(line);
		ft_strdel(&line);
	}
	else if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_RDONLY);

		ret = get_next_line(fd, &line);
		ft_putendl(line);
		ft_strdel(&line);
		ret = get_next_line(fd2, &line);
		ft_putendl(line);
		ft_strdel(&line);
		ret = get_next_line(fd, &line);
		ft_putendl(line);
		ft_strdel(&line);
		ret = get_next_line(fd2, &line);
		ft_putendl(line);
		ft_strdel(&line);
		ret = get_next_line(fd, &line);
		ft_putendl(line);
		ft_strdel(&line);
		ret = get_next_line(fd2, &line);
		ft_putendl(line);
		ft_strdel(&line);
		ret = get_next_line(fd, &line);
		ft_putendl(line);
		ft_strdel(&line);
		ret = get_next_line(fd2, &line);
		ft_putendl(line);
		ft_strdel(&line);
	}
	else
		return (2);
	if (argc >= 2)
		close(fd);
}
