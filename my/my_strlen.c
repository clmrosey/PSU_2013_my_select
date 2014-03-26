/*
** my_strlen.c for my_strlen in /home/rosey_c/rendu/Piscine-C-Jour_04
**
** Made by rosey
** Login   <rosey_c@epitech.net>
**
** Started on  Thu Oct 10 20:18:54 2013 rosey
** Last update Sun Dec  8 14:30:37 2013 rosey
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
    while (str[i] != '\0')
      {
	i = i + 1;
      }
    return(i);
}
