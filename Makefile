# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbatz <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 17:33:15 by kbatz             #+#    #+#              #
#    Updated: 2019/01/19 17:24:11 by kbatz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
HDRDIR	=	include/
OBJDIR	=	.objs/
SRCDIR	=	src/

# **************************************************************************** #

SRCS	=	char/	\
			str/	\
			mem/	\
			put/	\
			lst/	\
			btree/	\
			stack/	\
			queue/	\
			printf/	\

# **************************************************************************** #

SRC		=	$(addprefix $(SRCDIR),$(wildcard $(SRCS)*))
HDR 	=	$(wildcard $(HDRDIR)*)
OBJ		=	$(SRCS:%.c=%.o)
FLAG	=	-Wall -Wextra -Werror

vpath %.o $(OBJDIR)

# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ)
	echo $(SRC)
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
