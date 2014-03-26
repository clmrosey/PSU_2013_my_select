##
## Makefile for Makefile in /home/rosey_c/rendu/PSU_2013_minishell1
##
## Made by rosey
## Login   <rosey_c@epitech.net>
##
## Started on  Wed Dec 11 10:16:44 2013 rosey
## Last update Sun Jan 19 11:36:26 2014 clément
##

SRC	= get_passwd.c

NAME	= passwd

CC	= cc

ER	= -g3

OBJ	= $(SRC:.c=.o)

LIB	= -L my -lmy

LIBB	= -L/usr/lib64 -lmlx_$(HOSTTYPE) -L/usr/lib64/X11 -lXext -lX11

MATH	= -lm

FLAG	= -W -Werror -Wall -Wextra -ansi

MAKE	= make -C my 

RM	= rm -f

$(NAME):	$(OBJ)
	$(MAKE)
	$(CC) $(FLAG) -o $(NAME) $(OBJ) $(ER) $(LIB) $(LIBB) $(MATH)

all:		$(NAME)

clean:
	$(RM) $(OBJ)
	$(MAKE) clean

fclean:		clean
	$(RM)	$(NAME) 
	$(MAKE)  fclean

re:	fclean all
