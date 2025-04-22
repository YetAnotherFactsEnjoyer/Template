/*
** EPITECH PROJECT, 2025
** lib
** File description:
** write
*/

#include "my.h"

int write_char(const char c)
{
    if (!c)
        return EXIT_FAIL;
    write(1, &c, 1);
    return EXIT_SUCCESS;
}

int write_text(const char *str)
{
    if (!str)
        return EXIT_FAIL;
    write(1, str, str_len(str));
    return EXIT_SUCCESS;
}

int write_arr(const char **arr)
{
    if (!arr)
        return EXIT_FAIL;
    for (size_t i = 0; arr[i] != NULL; i++){
        write_text(arr[i]);
        write_text("\n");
    }
    return EXIT_SUCCESS;
}
