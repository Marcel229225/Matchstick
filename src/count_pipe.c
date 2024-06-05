/*
** EPITECH PROJECT, 2021
** count_pipe
** File description:
** count the number of pipe
*/

#include <stdio.h>
#include "../include/my.h"

int count_pipe(char **str, int line)
{
    int n = 1, m = 0, c = 0;

    for (;str[n] != NULL && n != (line + 1); n++) {
        for (m = 0; str[n][m] != '\n' ; m++) {
            if (str[n][m] == '|')
                c++;
        }
    }
    return (c);
}

int count_pipe_in_line(char **map, int line)
{
    int m = 0, n = 0;

    for (; map[line][n] != '\0'; n++)
        if (map[line][n] == '|')
            m++;
    return (m);
}

char **pulled_a_match(char **map, int line, int nb_of_pipe)
{
    int n = my_strlen(map[line]);

    for (int i = n;  i >  0 && nb_of_pipe; i--) {
        if (map[line][i] == '|') {
            map[line][i] = ' ';
            nb_of_pipe--;
        }
    }
    return (map);
}
