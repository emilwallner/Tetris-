# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ewallner <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 16:30:18 by ewallner          #+#    #+#              #
#    Updated: 2016/11/22 17:58:49 by ewallner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEAD = libft.h
FLAG =  -Werror -Wextra -Wall
OPTION = -c -I $(HEAD)
SRC = ft_putchar.c ft_putchar_fd.c ft_putstr_fd.c ft_putstr.c ft_strlen.c \
	  ft_putnbr_fd.c ft_putnbr.c ft_putendl_fd.c ft_putendl.c \
	  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_tolower.c ft_toupper.c \
	  ft_atoi.c ft_itoa.c \
	  ft_memset.c ft_bzero.c ft_memalloc.c ft_strnew.c ft_memdel.c \
	  ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	  ft_strcpy.c ft_strncpy.c ft_strcmp.c ft_strncmp.c ft_strdup.c \
	  ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c \
	  ft_strnstr.c ft_strdel.c ft_strstr.c ft_strclr.c ft_striter.c \
	  ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c \
	  ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_strlcat.c \
		ft_strndup.c

OBJ = $(SRC:%.c=%.o)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
