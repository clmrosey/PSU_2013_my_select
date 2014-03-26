/*
** my_isneg.c for my_isgneg in /home/rosey_c/rendu/Piscine-C-Jour_14
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Oct 25 10:21:55 2013 rosey
** Last update Fri Oct 25 10:35:48 2013 rosey
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_isneg(int n)
{
  if (n < 0)
  {
    my_putchar('N');
  }
  else
  {
    my_putchar('P');
  }
}