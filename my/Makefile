##
## makefile for makefile in /home/rosey_c/rendu/Piscine-C-lib/my
##
## Made by rosey
## Login   <rosey_c@epitech.net>
##
## Started on  Mon Oct 21 09:50:19 2013 rosey
## Last update Sun Jan 19 11:31:46 2014 clément
##

cc	= ar rc

SRCS	= my_swap.c 	\
	  my_putchar.c 	\
	  my_strcat.c 	\
	  my_strncpy.c	\
	  my_put_nbr.c	\
	  my_putstr.c	\
	  my_isneg.c	\
	  get_next_line.c\
	  my_strdup.c	\
	  my_strlen.c


RM	= rm -f

NAME	= libmy.a

OBJS	= $(SRCS:.c=.o)


all: $(NAME)

$(NAME):  $(OBJS)
	$(cc) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
