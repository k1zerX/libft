# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbatz <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 17:33:15 by kbatz             #+#    #+#              #
#    Updated: 2019/02/05 03:25:04 by kbatz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

# **************************************************************************** #

HDRDIR	=	include/
SRCDIR	=	src/
FLAG	=	-Wall -Wextra -Werror

# **************************************************************************** #

SRCS	=	$(wildcard $(SRCDIR)*)
HDR 	=	$(wildcard $(HDRDIR)*)
SRC		=

$(foreach S,$(SRCS), \
	$(eval SRC += $(wildcard $(S)/*)) \
)

OBJ		=	$(SRC:%.c=%.o)

# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): %.o: %.c $(HDR)
	gcc $(FLAG) -I$(HDRDIR) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -Rf $(NAME)

re: fclean all

norm:
	norminette $(SRC) $(HDR)
