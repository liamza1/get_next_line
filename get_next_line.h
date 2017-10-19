/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstreak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 13:55:14 by lstreak           #+#    #+#             */
/*   Updated: 2017/06/21 14:04:57 by lstreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 8
# define ENDL '\n'

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int get_next_line(int const fd, char **line);

#endif
