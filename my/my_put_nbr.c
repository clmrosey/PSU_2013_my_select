/*
** my_put-nbr.c for my_put_nbr in /home/rosey_c/rendu/Piscine-C-Jour_14
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Oct 25 10:37:40 2013 rosey
** Last update Fri Oct 25 14:43:15 2013 rosey
*/

int     my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_put_nbr(int nb)
{
  int	a;

  if(nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }

  if(nb >= 0 && nb < 10)
    {
      my_putchar(nb  + 48);
    }

  if(nb > 9)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }

  if(nb == -2147483648)
    {
      nb = nb / 10;
      my_put_nbr(-nb);
      my_putchar(56);
    }
}
