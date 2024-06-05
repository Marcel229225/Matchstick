/*
** EPITECH PROJECT, 2021
** for_error
** File description:
** to do the error
*/

#include "../include/my.h"

int for_line_error(int p, char **av, char *str)
{
    if (my_isnum(delate(str)) == 1) {
        my_putstr ("Error: invalid input (positive number expected)\n");
        return (3);
    }
    if (p < 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (3);
    }
    if (p == 0 || p > my_getnbr(av[1])) {
        my_putstr("Error: this line is out of range\n");
        return (3);
    }
    return (0);
}
