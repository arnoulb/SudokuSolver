/*
** tools.c for  in /home/daelomin/rendu/Rush/sudoki-bi
**
** Made by Arnould Jean-Michel
** Login   <daelomin@epitech.net>
**
** Started on  Sat Feb 27 20:00:51 2016 Arnould Jean-Michel
** Last update Sun Feb 28 22:12:10 2016 Arnould Jean-Michel
*/

#include "functions.h"

int	good_num(char **map, int line, int col, char c)
{
  if (nb_in_column(map, col, c) < 1 && nb_in_line(map, line, c) < 1
      && nb_in_square(map, line, col, c) < 1)
    return (1);
  else
    return (0);
}

int	nb_in_line(char **map, int line, char c)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (i <= 8)
    {
      if (map[line][i] == c)
	++nb;
      ++i;
    }
  return (nb);
}

int	nb_in_column(char **map, int col, char c)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (i <= 8)
    {
      if (map[i][col] == c)
	++nb;
      ++i;
    }
  return (nb);
}

int	nb_in_square(char **map, int line, int col, char c)
{
  int	tmp_l;
  int	tmp_c;
  int	nb;

  line = line - (line % 3);
  col = col - (col % 3);
  tmp_l = line;
  nb = 0;
  while (tmp_l <= col + 2)
    {
      tmp_c = col;
      while (tmp_c <= line + 2)
	{
	  if (map[tmp_l][tmp_c] == c)
	    ++nb;
	  ++tmp_c;
	}
      ++tmp_l;
    }
  return (nb);
}
