/*
** EPITECH PROJECT, 2025
** lib
** File description:
** convert
*/

#include "my.h"

static char *add_to_str(const char add, char *str)
{
    size_t i = 0;

    for (; str[i] != '\0'; i++);
    str[i] = add;
    str[i + 1] = '\0';
    return str;
}

static char *string_rec(const size_t nb, char *result)
{
    if (nb >= 10)
        string_rec(nb / 10, result);
    return add_to_str((nb % 10 + 48), result);
}

char *int_to_str(int nb)
{
    size_t i = 0;
    const size_t len = get_nb_len(nb);
    char *ret = malloc(sizeof(char) * (len + 1));

    if (nb < 0) {
        nb *= -1;
        ret[i] = '-';
        i++;
    }
    ret[i] = '\0';
    return string_rec(nb, ret);
}

static size_t num(const char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return EXIT_SUCCESS;
}

int str_to_int(const char *str)
{
    int res = 0;
    size_t count = 0;
    size_t i = 0;

    for (; str[i] != '\0'; i++) {
        if (!num(str[i]))
            return -1;
        if (num(str[i]) && count == 1)
            res *= 10;
        if (num(str[i])){
            res += (str[i] - 48);
            count = 1;
        }
    }
    return res;
}
