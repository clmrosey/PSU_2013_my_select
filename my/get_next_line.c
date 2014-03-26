/*
** get_next_line.c for get_next_line in /home/rosey_c
**
** Made by rosey
** Login   <rosey_c@epitech.net>
**
** Started on  Fri Nov 15 13:57:27 2013 rosey
** Last update Sun Dec  8 13:51:31 2013 rosey
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	<stdio.h>
#include	"get_next_line.h"

char		*get_next_line(const int fd)
{
  int		i;
  static  int	r;
  char		*str;
  static  char	buffer[4800];

  i = 0;
  r = read(fd, buffer, COUNT);
  if (r == 0)
    return (NULL);
  r = 0;
  if ((str = malloc(sizeof (char) *COUNT)) == NULL)
    return (NULL);
  while (buffer[r] != '\n' && buffer[r] != '\0')
    {
      str[i] = buffer[r];
      r = r + 1;
      i = i + 1;
    }
  return (str);
}
