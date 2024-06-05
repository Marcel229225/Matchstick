/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** a librarie
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest , char const *src);
void display_map(char **map, int line);
int my_getnbr(char const *str);
char **draw_map_and_charge(int row);
char **pulled_a_match(char **map, int line, int nb_of_pipe);
int count_pipe(char **str, int line);
char *rev_str(char *str);
int count_pipe_in_line(char **map, int line);
int ia(char **map);
int my_printf(const char *f, ...);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
void display(int p, int t);
void display2(int k);
void introduce_ia(char **map, char **av);
int count_line(char **map);
int gamer(char **map, char **av, int q);
int for_line_error(int p, char **av, char *str);
int for_pipe_error(char **map, int p, int t);
int for_recurssive(char *str, char *str2, char **map, char **av, int q);
int for_error(int q, int t, int p, char **map, char *str2);
int my_isnum(char *str);
char *delate(char *str);
int macro_gamer(char **map, char **av, int q);

#endif
