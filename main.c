/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstreak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 11:13:20 by lstreak           #+#    #+#             */
/*   Updated: 2017/06/24 09:19:12 by lstreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int ac, char **av)
{
	int fd;
	int ret;
	char *buf;


	if (ac != 1)
	{
		fd = open(av[1], O_RDONLY);
		while ((ret = get_next_line(fd, &buf)) != 0)
		{
			printf("%s\n", buf);
			printf("ret val %d\n", ret);
			free(buf);
		}
		//      ret = get_next_line(fd, &buf);
		//      printf("2nd return %s\n", buf);
		close(fd);
	}
}
