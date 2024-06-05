/*
** EPITECH PROJECT, 2021
** main
** File description:
** principal function
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    char **map = NULL;

    if (ac == 3) {
        if (my_getnbr(av[1]) <= 0 || my_getnbr(av[2]) <= 0
            || my_isnum(av[1]) == 1
            || my_isnum(av[2]) == 1) return (84);
        int i = gamer(map, av, my_getnbr(av[2]));
        if (i == 0) return (0);
        else if (i == 2) return (2);
        else if (i == 1) return (1);
    }
    else
        return (84);
    free (map);
    return (0);
}
