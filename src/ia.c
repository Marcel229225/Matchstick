/*
** EPITECH PROJECT, 2021
** ia
** File description:
** a artificial intelligence
*/

#include "../include/my.h"

int ia(char **map)
{
    int m = 0, n = 0;

    for (; map[m] != NULL; m++)
        if (count_pipe_in_line(map, m) > 0)
            return (m);
}

void introduce_ia(char **map, char **av)
{
    int k = ia(map);
    display2(k);
    map =  pulled_a_match(map,  k, 1);
    display_map(map, (my_getnbr(av[1]) + 2));
}

int count_line(char **map)
{
    int n = 0, m = 0;

    for (; map[n] != NULL; n++, m++)
        return (m);
}

int my_isnum(char *src)
{
    int i = 0;
    int  j = 0;

    for (i = 0; src[i] != '\0'; i++) {
        if (src[i] >= '0' && src[i] <= '9')
            j = 0;
        else
            return (1);
    }
    return (0);
}

char *delate(char *src)
{
    int i = 0, j = 0;
    char *str = NULL;
    str = malloc(sizeof(char) * (my_strlen(src) - 1));

    for (i = 0; src[i] != '\n'; i++, j++)
        str[j] = src[i];
    return (str);
}
