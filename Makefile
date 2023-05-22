# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 16:59:48 by bmoudach          #+#    #+#              #
#    Updated: 2023/05/22 17:17:34 by bmoudach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	SRCS/*.c ft_printf.c \

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -I.

NAME	=	ft_printf.a

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re bonus



