/*
** select.c for select in /home/rosey_c/rendu/PSU_2013_my_select
** 
** Made by clément
** Login   <rosey_c@epitech.net>
** 
** Started on  Mon Jan 13 11:03:50 2014 clément
** Last update Sun Jan 19 11:34:53 2014 clément
*/

#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int    lire()
{
  struct termios	t;
  char			*buffer;
  
  if (tcgetattr(0, &t) == -1)
    return (-1);
  t.c_lflag &= ~ICANON; 
  if (tcsetattr(0, 0, &t) == -1)
    return (0);
  if ((buffer = malloc(sizeof(char))) == NULL)
    return (0);
  while(42)
    {
      read(0, buffer, 1);
      my_putstr("\n", *buffer);
    }
  free(buffer);
}
int	main()
{
  lire();
}
