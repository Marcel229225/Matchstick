/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
**  copies a string into another
*/

char *my_strcpy(char *dest , char const *src)
{
    int m;
    m = 0;

    while (src[m] != '\0') {
        dest[m] = src[m];
        m++;
    }
    dest[m] = '\0';
    return (dest);
}
