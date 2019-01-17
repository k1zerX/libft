# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbatz <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 17:33:15 by kbatz             #+#    #+#              #
#    Updated: 2019/01/17 21:25:50 by kbatz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRJNAME = libft
NAME = $(PRJNAME).a
HDRDIR = include/
SRCDIR = src/
HDR = $(wildcard $(HDRDIR)*)
SRC =	ft_atoi.c ft_btree_bfs.c ft_btree_infix.c ft_btree_insert.c			\
		ft_btree_new.c ft_btree_prefix.c ft_btree_suffix.c ft_bzero.c		\
		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c	\
		ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c		\
		ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c		\
		ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c		\
		ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c			\
		ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c				\
		ft_queue_new.c ft_queue_pop.c ft_queue_push.c ft_realloc.c			\
		ft_stack_new.c ft_stack_pop.c ft_stack_push.c ft_strcat.c			\
		ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c			\
		ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c		\
		ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c		\
		ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c		\
		ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c		\
		ft_tolower.c ft_toupper.c ft_min.c ft_max.c get_next_line.c			\
		ft_itoa_base.c ft_new_elem.c

SRC = $(wildcard )
OBJ = $(SRCS:%.c=%.o)
OBJDIR = .objs/
FLAG = -Wall -Wextra -Werror

vpath %.o $(OBJDIR)

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ)
	ar rc $(NAME) $(addprefix $(OBJDIR), $(OBJ))

$(OBJ): %.o: %.c $(HDR)
	gcc $(FLAG) -c -I$(HDRDIR) $< -o $(OBJSDIR)$@

clean:
	rm -Rf $(OBJDIR)

fclean: clean
	rm -Rf $(NAME)

re: fclean all

$(OBJDIR):
	mkdir $(OBJDIR)

norm:
	norminette *.c *.h
