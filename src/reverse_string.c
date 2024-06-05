/*
** EPITECH PROJECT, 2020
** reverse_string
** File description:
** swap each of the string characters two by two
*/

#include "../include/my.h"
#include <string.h>

int my_strlen(char const *str);

char *rev_str(char *str)
{
    int m, n;
    char p;

    m = my_strlen(str) - 1;
    for (n = 0; n < (my_strlen(str) / 2);n++, m--) {
        p = str[n];
        str[n] = str[m];
        str[m] = p;
    }
    return (str);
}
