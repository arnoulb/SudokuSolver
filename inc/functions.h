/*
** functions.h for  in /home/daelomin/rendu/Rush/sudoki-bi
**
** Made by Arnould Jean-Michel
** Login   <daelomin@epitech.net>
**
** Started on  Sat Feb 27 14:56:50 2016 Arnould Jean-Michel
** Last update Sun Feb 28 22:13:04 2016 Arnould Jean-Michel
*/

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

char	**my_split(char *);
char	**my_put(char *, int);
int	count(char *);
int	my_display(char **);
char	*read_map();
int	error(char *str);
int	nb_in_line(char **map, int line, char c);
int	nb_in_column(char **map, int line, char c);
int	nb_in_square(char **map, int line, int col, char c);
int	good_num(char **map, int line, int col, char c);
int	solver(char **, int);
int	checker(char **);

#endif
