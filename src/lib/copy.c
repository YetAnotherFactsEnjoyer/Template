/*
** EPITECH PROJECT, 2025
** lib
** File description:
** copy
*/

#include "my.h"

void cpy_str(char *dest, const char *src)
{
    size_t i = 0;

    if (!dest || !src)
        return;
    for (; dest[i] != '\0' && src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}

void cpy_n_str(char *dest, const char *src, const size_t limit)
{
    size_t i = 0;

    if (!dest || !src)
        return;
    for (; i < limit && dest[i] != '\0' && src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}

void cpy_arr(char **dest, const char **src)
{
    size_t i = 0;

    if (!dest || !src)
        return;
    for (; src[i]; i++)
        dest[i] = (char *)src[i];
    dest[i] = NULL;
}

void cpy_n_arr(char **dest, const char **src, const size_t limit)
{
    size_t i = 0;

    if (!dest || !src)
        return;
    for (; i < limit && src[i]; i++)
        dest[i] = (char *)src;
    dest[i] = NULL;
}
