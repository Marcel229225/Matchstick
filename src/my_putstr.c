/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** diplay a string of character
*/

#include "../include/my.h"

int my_putstr(char const *str)
{
    int n;

    for (n = 0; str[n] != '\0'; n++) {
        my_putchar(str[n]);
    }
    return (0);
}
