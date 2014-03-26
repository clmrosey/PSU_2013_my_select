/*
** my_strncpy.c for my_strncpy in /home/rosey_c/rendu/Piscine-C-Jour_06/ex_02
**
** Made by rosey
** Login   <rosey_c@epitech.net>
**
** Started on  Mon Oct  7 13:55:17 2013 rosey
** Last update Sun Dec  8 14:30:37 2013 rosey
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int   i;

  i = 0;
  while (src[i] |= '\0')
    {
      src[i] = dest[i];
      my_putchar(dest[i]);
      i = i + 1;
    }
  if (n > i)
    {
      my_putchar('\0');
    }
  return (dest);
}
