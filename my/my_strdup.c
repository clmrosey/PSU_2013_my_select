/*
** my_strdup.c for my_strdup in /home/rosey_c/rendu/Piscine-C-Jour_08/ex_01
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Wed Oct  9 11:58:26 2013 rosey
** Last update Fri Oct 11 19:22:06 2013 rosey
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  int	i;
  int	p;
  char	*dest;

  i = 0;
  p = my_strlen(src);
  dest = malloc(p);
  while (src[i] != '\0')
    {
      dest[i] = src[i];
       i = i + 1;
    }
  return (dest);
}
