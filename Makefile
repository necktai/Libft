# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntai <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/25 23:20:24 by ntai              #+#    #+#              #
#    Updated: 2018/04/07 22:18:26 by ntai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

NAME = libft.a

SOURCES = ft_putchar_fd.c ft_strcmp.c ft_strlen.c ft_strrchr.c ft_atoi.c \
	  ft_memccpy.c    ft_putendl.c    ft_strcpy.c       \
	  ft_bzero.c          ft_putnbr.c        \
      	  ft_strstr.c ft_isalnum.c         ft_putnbr_fd.c  ft_strdup.c \
	  ft_strncat.c     ft_isalpha.c    ft_memcpy.c     ft_putstr.c \
        ft_strncmp.c     ft_isascii.c     \
	  ft_putstr_fd.c   ft_strncpy.c    ft_tolower.c  ft_isdigit.c \
      	  ft_memmove.c    ft_strcat.c          ft_toupper.c \
	  ft_isprint.c    ft_memset.c     ft_strchr.c         \
	        ft_putchar.c       ft_strlcat.c    ft_strnstr.c \
	  	ft_putendl_fd.c ft_memchr.c ft_memcmp.c ft_memalloc.c \
      ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c\
      ft_strsplit.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c\
	  ft_itoa.c ft_lstnew.c ft_lstdel.c ft_lstdelone.c ft_lstadd.c ft_lstmap.c ft_lstiter.c\
	  ft_strrev.c ft_swap.c ft_recursive_power.c ft_is_prime.c\
	  ft_iterative_power.c ft_recursive_factorial.c ft_iterative_factorial.c\
	  ft_str_is_printable.c ft_sqrt.c ft_list_last.c ft_div_mod.c ft_list_size.c\

OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCES)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
