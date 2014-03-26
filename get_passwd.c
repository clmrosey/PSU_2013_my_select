/*
** get_passwd.c for get in /home/rosey_c/rendu/PSU_2013_my_select
** 
** Made by clément
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Jan 17 16:20:42 2014 clément
** Last update Sun Jan 19 11:10:12 2014 clément
*/

#include <unistd.h>
#include <termios.h>
#include <stdio.h>

int	get()
{
  struct termios t;
  char	buffer;

  if (tcgetattr(0, &t) == -1)
    return (-1);
  t.c_lflag &= ~ECHO;
  // t.c_lflag &= ~VTIME;
  if (tcsetattr(0, 0, &t) == -1)
    {
      my_putstr("tcsetattr failed\n");
      return (-1);
    }
  my_putstr("type your pwd :\n", 20);
  return (get_next_line(0));
}

int	main()
{
  get();
}
