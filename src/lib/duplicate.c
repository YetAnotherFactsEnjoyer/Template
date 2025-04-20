/*
** EPITECH PROJECT, 2025
** lib
** File description:
** duplicate
*/

#include "my.h"

char *dup_str(const char *str)
{
    char *new_str = NULL;

    if (!str)
        return NULL;
    new_str = malloc(sizeof(char) * str_len(str) + 1);
    if (!new_str)
        return NULL;
    cpy_str(new_str, str);
    return new_str;
}

char *dup_n_str(const char *str, const size_t limit)
{
    char *new_str = NULL;

    if (!str)
        return NULL;
    new_str = malloc(sizeof(char) * str_len(str) + 1);
    if (!new_str)
        return NULL;
    cpy_n_str(new_str, str, limit);
    return new_str;
}
