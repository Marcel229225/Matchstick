/*
** EPITECH PROJECT, 2021
** for_recussive
** File description:
** to do the reccursivity
*/

#define for_recurssivemacro() size_t n = 0, m = 0;                      \
    my_putstr("Line: ");                                                \
    if (count_pipe_in_line(map, count_line(map)) < 0) return 84;        \
    if (getline(&str, &n, stdin) == -1) return 0;                       \
    int p = my_getnbr(str);                                             \
    if (for_line_error(p, av, str) == 3)                                \
        return (for_recurssive(str, str2, map, av, q));                 \
    my_putstr("Matches: ");                                             \
    if (getline(&str2, &m, stdin) == -1) return 0;                      \
    int t = my_getnbr(str2);                                            \
    if (for_error(q, t, p, map, str2) == 1)                             \
        return ((for_recurssive(str, str2, map, av, q)));               \
    map =  pulled_a_match(map,  p , t);                                 \
    display(t, p);                                                      \
    display_map(map, (my_getnbr(av[1]) + 2));                           \
    if (count_pipe(map, my_getnbr(av[1])) <= 0) {                       \
        if (for_end_gamer() == 2) return (2); }                         \
    introduce_ia(map, av);                                              \
    if (count_pipe(map, my_getnbr(av[1])) <= 0) {                       \
        if (for_end_ia() == 1) return (1); }                            \
    return (7);
