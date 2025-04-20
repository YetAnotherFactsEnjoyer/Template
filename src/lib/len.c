/*
** EPITECH PROJECT, 2025
** lib
** File description:
** len
*/

#include "my.h"

size_t str_len(const char *str)
{
    size_t i = 0;

    if (!str)
        return EXIT_FAIL;
    for (; str[i] != '\0'; i++);
    return i;
}

size_t get_arr_len(const char **line)
{
    size_t count = 0;

    if (!line)
        return EXIT_FAIL;
    for (size_t i = 0; line[i] != NULL; i++)
        count++;
    return count;
}

size_t get_nb_len(size_t nb)
{
    size_t len = 1;

    if (nb < 0)
        nb *= -1;
    for (; nb > 9; len++)
        nb /= 10;
    return len;
}
