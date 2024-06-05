/*
** EPITECH PROJECT, 2020
** My_put_nbr
** File description:
** Display a number
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int reste;
    reste = 0;

    if (nb < 0) {
        my_putchar ('-');
        nb = nb * -1;
    }
    if ((nb >= 0) && (nb < 10))
        my_putchar (nb + '0');
    else if (nb >= 10) {
        reste = nb % 10;
        nb = nb / 10;
        my_put_nbr (nb);
        my_putchar (reste  + 48);
    }
    return (0);
}
