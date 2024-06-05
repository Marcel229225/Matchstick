/*
** EPITECH PROJECT, 2021
** draw_a_map
** File description:
** draw a map in double array
*/

#include "../include/my.h"

char *put_pipe(int line, int row, int col)
{
    char *str = NULL;
    int deb = 0, end = 0,  n = 1;
    str = malloc(sizeof(char) * col + 2);
    str[0] = '*';
    deb = col / 2 - line;
    end = col / 2 + line;
    for (; n != col; n++) {
        if (n >= deb && n <= end)
            str[n] = '|';
        else
            str[n] = ' ';
    }
    str[col - 1] = '*';
    str[col] = '\n';
    return (str);

}

char **draw_map_and_charge(int row)
{
    char **map = NULL;
    int col = 0,  n = 0;

    col = (row * 2) + 1;
    map = malloc(sizeof(char *) * (row + 1));
    map[0] = NULL;
    map[0] = malloc(sizeof(char) * (col + 2));
    map[row + 1] = malloc(sizeof(char) * col + 1);
    for (n = 0; n != col; n++) {
        map[0][n] = '*'; }
    n = 1;
    for (n = 1; n != row + 1; n++) {
        map[n] = put_pipe((n - 1), row, col); }
    n++;
    map[0][col] = '\n';
    map[row + 1] = my_strcpy(map[row + 1], map[0]);
    map[row + 1][col] = '\n';
    map[row + 1][col + 1] = '\0';
    return (map);
}

void display_map(char **map, int line)
{
    int n = 0;

    for (n = 0; n != line; n++) {
        write(1, map[n], my_strlen(map[n]));
    }
}
