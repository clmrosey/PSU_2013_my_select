/*
** my_aff.c for my_aff in /home/rosey_c/rendu/PSU_2013_my_select/recode
** 
** Made by clément
** Login   <rosey_c@epitech.net>
** 
** Started on  Thu Jan 23 10:49:12 2014 clément
** Last update Thu Jan 23 11:06:03 2014 clément
*/

#include <stdlib.h>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int	prout()
{
  char	buf;
  struct termios *termios_p;

  if (malloc(sizeof(buf)) == NULL)
    return (0);
 
  termios_p->c.lflag &= ~ICANON;
  termios_p->c.lflag &= ~ECHO;
  {
    printf("coucou");
  }
  free(buf);
}

int	main()
{
  prout();
}
