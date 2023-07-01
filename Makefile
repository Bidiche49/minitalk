# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 15:59:03 by ntardy            #+#    #+#              #
#    Updated: 2023/02/05 21:04:36 by ntardy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_CLIENT		=	client
NAME_SERVEUR	=	serveur

CC				=	clang

CFLAGS			=	-Wall -Werror -Wextra

SRCS_CLIENT		=	client.c	\
					ft_strlen.c
SRCS_SERVEUR	=	serveur.c	\
					ft_strlen.c	\
					strcat.c

OBJS_CLIENT		=	$(SRCS_CLIENT:.c=.o)
OBJS_SERVEUR	=	$(SRCS_SERVEUR:.c=.o)

.PHONY: all
all: $(NAME_CLIENT) $(NAME_SERVEUR)

$(NAME_CLIENT): $(OBJS_CLIENT)
	$(CC) $(CFLAGS) $(SRCS_CLIENT) -o $(NAME_CLIENT)

$(NAME_SERVEUR): $(OBJS_SERVEUR)
	$(CC) $(CFLAGS) $(SRCS_SERVEUR) -o $(NAME_SERVEUR)

.PHONY: clean
clean:
	rm -rf $(OBJS_CLIENT) $(OBJS_SERVEUR)

.PHONY: fclean
fclean: clean
	rm -f $(NAME_CLIENT) $(NAME_SERVEUR)

.PHONY: re
re: fclean all
