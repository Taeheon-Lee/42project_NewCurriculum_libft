# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 10:40:45 by tlee              #+#    #+#              #
#    Updated: 2020/04/18 15:27:20 by tlee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_isdigit.c ft_lstlast.c ft_putnbr_fd.c ft_strlcat.c ft_toupper.c ft_bzero.c ft_isprint.c ft_lstmap.c ft_memmove.c ft_strlcpy.c ft_calloc.c ft_itoa.c ft_lstnew.c ft_memset.c ft_putstr_fd.c ft_strlen.c ft_strnstr.c ft_lstadd_back.c ft_lstsize.c ft_split.c ft_strdup.c ft_strrchr.c ft_lstadd_front.c ft_memccpy.c ft_putchar_fd.c ft_strmapi.c ft_isalnum.c ft_lstclear.c ft_memchr.c ft_strchr.c ft_strtrim.c ft_isalpha.c ft_lstdelone.c ft_memcmp.c ft_putendl_fd.c ft_strncmp.c ft_substr.c ft_isascii.c ft_lstiter.c ft_memcpy.c ft_strjoin.c ft_tolower.c

OBJS	= $(SRCS:.c=.o)

BSRCS	= ft_memdel_bonus.c ft_strcpy_bonus.c ft_strnequ_bonus.c ft_putstr_bonus.c ft_strcut_bonus.c ft_strnew_bonus.c ft_strdel_bonus.c ft_count_digit_bonus.c ft_putchar_bonus.c ft_strmap_bonus.c ft_insert_nbr_bonus.c ft_strcat_bonus.c ft_strequ_bonus.c ft_strstr_bonus.c ft_putendl_bonus.c ft_striter_bonus.c ft_strncat_bonus.c ft_strclr_bonus.c ft_striteri_bonus.c ft_putnbr_bonus.c ft_strcmp_bonus.c ft_strncpy_bonus.c

BOBJS	= $(BSRCS:.c=.o)

NAME	= libft.a

GCC		= gcc
GCCFLAG	= -Wall -Wextra -Werror -std=c99
RM		= rm -f

.c.o:
			$(GCC) $(GCCFLAG) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

all:		$(NAME)

bonus:		$(OBJS) $(BOBJS)
			ar rc $(NAME) $(BOBJS) $(OBJS)

clean:
			$(RM) $(OBJS) $(TOBJS) $(GCNOS) $(TGCNOS) $(GCDAS) $(TGCDAS)
			$(RM) $(BOBJS)

fclean:		clean
			$(RM) $(NAME) $(TSTNAME)

re:			fclean all

reclean:	fclean all clean

.PHONY:		all clean fclean re reclean .c.o
