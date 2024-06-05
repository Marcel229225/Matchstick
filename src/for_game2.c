/*
** EPITECH PROJECT, 2021
** for_game
** File description:
** to do the game
*/

#include "../include/my.h"

int macro_gamer(char **map, char **av, int q)
{
    char *str = NULL, *str2 = NULL;
    map = draw_map_and_charge(my_getnbr(av[1]));
    display_map(map, (my_getnbr(av[1]) + 2));
    while (count_pipe(map, my_getnbr(av[1])) > 0) {
        my_putstr("\nYour turn:\n");
        int i = for_recurssive(str, str2, map, av, q);
        if (i != 7) return (i);
    }
    return 0;
}
