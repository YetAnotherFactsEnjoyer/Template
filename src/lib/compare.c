/*
** EPITECH PROJECT, 2025
** lib
** File description:
** compare
*/

#include "my.h"

size_t cmp_str(const char *s1, const char *s2)
{
    for (size_t i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    return EXIT_SUCCESS;
}

size_t cmp_n_str(const char *s1, const char *s2, const size_t limit)
{
    for (size_t i; i < limit && s1[i] != '\0' && s2[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    return EXIT_SUCCESS;
}
