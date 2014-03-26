/*
** my_swap.c for my_swap in /home/rosey_c/rendu/Piscine-C-Jour_14
**
** Made by rosey
** Login   <rosey_c@epitech.net>
**
** Started on  Fri Oct 25 11:42:17 2013 rosey
** Last update Wed Jan 15 15:39:31 2014 clément
*/

int	swap(int *a, int *b)
{
  int	ptr;
  ptr = *a;
  *a = *b;
  *b = ptr;
}
