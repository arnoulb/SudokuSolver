/*
** my_display.c for  in /home/daelomin/rendu/Rush/sudoki-bi
**
** Made by Arnould Jean-Michel
** Login   <daelomin@epitech.net>
**
** Started on  Sat Feb 27 15:13:19 2016 Arnould Jean-Michel
** Last update Sat Feb 27 18:49:23 2016 Arnould Jean-Michel
*/

#include <stdio.h>

int	my_display(char **map)
{
  int	i;
  int	a;

  i = 0;
  printf("|------------------|\n");
  while (map[i])
    {
      a = 0;
      printf("|");
      while (map[i][a] != '\n' && map[i][a])
	{
	  printf(" ");
	  printf("%c", map[i][a]);
	  a++;
	}
      printf("|\n");
      i++;
    }
  printf("|------------------|\n");
  return (0);
}
