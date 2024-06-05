/*
** EPITECH PROJECT, 2021
** for_game
** File description:
** to do the game
*/

#include "../include/my.h"
#include "../include/for_recussive.h"

int for_end_gamer(void)
{
    my_putstr("You lost, too bad...");
    return (2);
}

int for_end_ia(void)
{
    my_putstr ("I lost... snif... but I'll get you next time!!");
    return (1);
}

int for_error(int q, int t, int p, char **map, char *str2)
{
    if (my_isnum(delate(str2)) == 1) {
        my_putstr ("Error: invalid input (positive number expected)\n");
        return (1); }
    if (t < 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (1); }
    if (t > q) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(q);
        my_putstr(" matches per turn \n");
        return (1); }
    if (t > count_pipe_in_line(map, p)) {
        my_putstr("Error: not enough matches on this line\n");
        return (1); }
    else if (t == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (1); }
    return (0);
}

int for_recurssive(char *str, char *str2, char **map, char **av, int q)
{
    for_recurssivemacro()
}

int gamer(char **map, char **av, int q)
{
    return (macro_gamer(map, av, q));
}
