/*
** EPITECH PROJECT, 2021
** for_display
** File description:
** to display the message
*/

#include "../include/my.h"

void display(int t, int p)
{
    my_putstr("Player removed ");
    my_put_nbr(t);
    my_putstr(" match(es) from line ");
    my_put_nbr(p);
    my_putchar('\n');
}

void display2(int k)
{
    my_putstr("\nAI's turn...\n");
    my_putstr("AI removed 1 match(es) from line ");
    my_put_nbr(k);
    my_putchar('\n');
}
