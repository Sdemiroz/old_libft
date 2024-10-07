# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 05:00:17 by sdemiroz          #+#    #+#              #
#    Updated: 2024/03/21 22:45:44 by sdemiroz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalpha.c ft_isascii.c ft_isprint.c \
        ft_memset.c ft_bzero.c ft_strlen.c ft_isalnum.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strrchr.c
		
OBJS = $(SRCS:.c=.o)   

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

BONUS_OBJS = $(BONUS:.c=.o) 
 
CC = cc
CFLAGS =  -Wall -Wextra -Werror
ARFLAGS = -rcs
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(BONUS_OBJS)
		ar $(ARFLAGS) $(NAME) $(OBJS) $(BONUS)
		
%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@
        
clean:
		$(RM) $(OBJS) $(BONUS_OBJS)
		
fclean: clean
			$(RM) $(NAME) *.o
			
re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all, clean, fclean, re, bonus

