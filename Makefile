# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbatz <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 17:33:15 by kbatz             #+#    #+#              #
#    Updated: 2019/09/13 21:55:16 by kbatz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

# **************************************************************************** #

HDRDIR	=	include/
SRCDIR	=	src/
OBJDIR	=	.obj/
FLAG	=	-Wall -Wextra -Werror

# **************************************************************************** #

SRC		=	$(patsubst $(SRCDIR)%,%,$(wildcard $(SRCDIR)*.c))
HDR 	=	$(wildcard $(HDRDIR)*.h)
OBJ		=	$(SRC:%.c=%.o)

# **************************************************************************** #

vpath %.c $(SRCDIR)
vpath %.o $(OBJDIR)

# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ)
	ar rc $(NAME) $(addprefix $(OBJDIR),$(OBJ))
	ranlib $(NAME)

$(OBJ): %.o: %.c $(HDR)
	gcc $(FLAG) -I$(HDRDIR) -I./ -o $(OBJDIR)$@ -c $<
# -I./ ubrat' kostyl'

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	rm -Rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette $(SRC) $(HDR)
