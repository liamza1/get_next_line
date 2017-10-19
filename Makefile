# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lstreak <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/24 09:41:58 by lstreak           #+#    #+#              #
#    Updated: 2017/06/24 09:42:59 by lstreak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c                  
clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
