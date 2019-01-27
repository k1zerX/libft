# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbatz <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 17:33:15 by kbatz             #+#    #+#              #
#    Updated: 2019/01/23 16:07:21 by kbatz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
HDRDIR	=	include/
OBJDIR	=	.objs/
SRCDIR	=	src/

# **************************************************************************** #

SRCS	=	char	\
			str		\
			mem		\
			put		\
			lst		\
			btree	\
			stack	\
			queue	\
			printf

# **************************************************************************** #

SRC		=	$(wildcard $(SRCDIR)*)
HDR 	=	$(wildcard $(HDRDIR)*)
FLAG	=	-Wall -Wextra -Werror

vpath %.o $(OBJDIR)

OBJ		=	$(SRC:%.c=%.o)

#$(foreach S, $(SRCS), \
	SRC += $(addprefix $(SRCDIR),$(S)) \
)

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
