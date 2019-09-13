# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbatz <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 17:33:15 by kbatz             #+#    #+#              #
#    Updated: 2019/08/26 16:58:33 by kbatz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

# **************************************************************************** #

HDRDIR	=	include/
SRCDIR	=	src/
FLAG	=	-Wall -Wextra -Werror

# **************************************************************************** #

SRC		=	$(wildcard $(SRCDIR)*.c)
HDR 	=	$(wildcard $(HDRDIR)*.h)
OBJ		=	$(SRC:%.c=%.o)

# **************************************************************************** #

all: $(NAME)
	echo $(SRC)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): %.o: %.c $(HDR)
	gcc $(FLAG) -I$(HDRDIR) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette $(SRC) $(HDR)
