# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbatz <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 17:33:15 by kbatz             #+#    #+#              #
#    Updated: 2019/02/04 22:02:48 by kbatz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

# **************************************************************************** #

HDRDIR	=	include/
OBJDIR	=	.obj/
SRCDIR	=	src/
FLAG	=	-Wall -Wextra -Werror

# **************************************************************************** #

SRCS	=	$(patsubst $(SRCDIR)%,%,$(wildcard $(SRCDIR)*))
HDR 	=	$(wildcard $(HDRDIR)*)
SRC		=

$(foreach S,$(SRCS), \
	$(eval SRC += $(patsubst $(SRCDIR)%,%,$(wildcard $(addprefix $(SRCDIR), $(S))/*))) \
	$(eval OBJ += $(patsubst $(SRCDIR)%.c,%.o,$(wildcard $(addprefix $(SRCDIR), $(S))/*))) \
)

OBJ = $(SRC:%.c=%.o)

# **************************************************************************** #

vpath %.c $(SRCDIR)
vpath %.o $(OBJDIR)

# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ)
	ar rc $(NAME) $(addprefix $(OBJDIR), $(OBJ))

$(OBJ): %.o: %.c $(HDR)
	gcc $(FLAG) -I$(HDRDIR) -o $(OBJDIR)$@ -c $<

clean:
	rm -Rf $(OBJDIR)

fclean: clean
	rm -Rf $(NAME)

re: fclean all

$(OBJDIR):
	mkdir $(OBJDIR)
	$(foreach O,$(SRCS), \
		mkdir $(OBJDIR)$(O) \
	)

norm:
	norminette *.c *.h
