# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 18:20:05 by cyacoub-          #+#    #+#              #
#    Updated: 2022/10/18 13:05:49 by cyacoub-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -rf

SRC = ft_printf.c\
		Libft/ft_strlen.c\
		Libft/ft_putstr.c\
		Libft/ft_putchar.c\
		Libft/ft_putnbr.c\
		Libft/ft_prsprint.c\
		Libft/ft_checkbase.c\
		Libft/ft_putnbr_base_unslng.c\
		Libft/ft_hexpoint.c\
		Libft/ft_putnbr_base_uns.c\
		Libft/ft_putnbr_uns.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar crs $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean 