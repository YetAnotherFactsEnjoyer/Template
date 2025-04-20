/*
** EPITECH PROJECT, 2025
** utils.c
** File description:
** utils
*/

#include "../../include/my.h"

void write_char(char c)
{
    write(1, &c, 1);
}

void write_text(const char *str)
{
    if (!str)
        return;
    write(1, &str, str_len(str));
}
