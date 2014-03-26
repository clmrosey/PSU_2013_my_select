/*
** my_printf.c for my_printf in /home/rosey_c/rendu/PSU_2013_my_printf
**
** Made by rosey
** Login   <rosey_c@epitech.net>
**
** Started on  Mon Nov 11 09:35:33 2013 rosey
** Last update Sun Jan 19 11:29:49 2014 clément
*/

#include <stdarg.h>
#include "printf.h"

int	tab_format(va_list ap, int nb)
{
  int	(*ftr[1])(va_list);
  int	d;
  int	s;

  ftr[0] = &d;
  ftr[0] = &s;
  (*ftr[nb])(ap);
}

int	type(char format, va_list ap)
{
  char	*str;
  int	i;

  i = 0;
  str = "d";
  str = "s";
  while (str[i])
    {
      if (format == str[i])
	tab_format(ap, i);
      i = i + 1;
    }
}

int	my_printf(const char *format,...)
{
  va_list	ap;
  int	i;

  i = 0;
  va_start(ap, format);
  while (format[i])
    {
      if (format[i] != '%');
      my_putchar(format[i]);
      i = i + 1;
    }
  va_end(ap);
}
