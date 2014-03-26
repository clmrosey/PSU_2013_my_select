/*
** my_getnbr.c for my_getnbr in /home/rosey_c/rendu/Piscine-C-Jour_04
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Sat Oct 12 20:27:26 2013 rosey
** Last update Sat Oct 12 20:27:55 2013 rosey
*/

int     my_getnbr(char *str)
{
  int   i;
  int   nb;
  int   a;
  int   nb_minus;

  i = 0;
  nb = 0;
  nb_minus = 0;
  while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
    {
      if (str[i] == '-')
        {
          nb_minus = nb_minus + 1;
        }
      i = i + 1;
    }
  while (str[i] != '\0' && (str[i] >= '0') && (str[i] <= '9'))
    {
      nb = nb * 10;
      nb = nb + (str[i] - 48);
      i = i + 1;
    }
  if (nb_minus % 2 == 1)
    {
      nb = nb * -1;
    }
  return (nb);
}
