/*
** EPITECH PROJECT, 2025
** solo_stumper03
** File description:
** unit-tests (for fizzbuzz project)
*/

#include <criterion/criterion.h>
#include "my.h"

Test(str_to_int, lib)
{
    cr_expect(str_to_int("") == 0);
    cr_expect(str_to_int("0") == 0);
    cr_expect(str_to_int("6") == 6);
    cr_expect(str_to_int("e") == -1);
    cr_expect(str_to_int("\t") == -1);
    cr_expect(str_to_int("896345") == 896345);
}

Test(str_len, lib)
{
    cr_expect(str_len("") == 0);
    cr_expect(str_len("abcdefg") == 7);
    cr_expect(str_len("\n") == 1);
    cr_expect(str_len("a") == 1);
}

Test(get_arr_len, lib)
{
    const char *arr[1] = {NULL};
    const char *arr1[2] = {"a", NULL};
    const char *arr2[3] = {"a", "b", NULL};
    const char *arr3[5] = {"a", "b", "c", "d", NULL};
    const char *arr4[6] = {"a", "b", "c", "d", "e", NULL};

    cr_expect(get_arr_len(arr) == 0);
    cr_expect(get_arr_len(arr1) == 1);
    cr_expect(get_arr_len(arr2) == 2);
    cr_expect(get_arr_len(arr3) == 4);
    cr_expect(get_arr_len(arr4) == 5);
}

Test(read_file, lib)
{
    cr_expect(my_strcmp(read_file("tests/example.txt"), "Hello World\n") == 0);
}

Test(int_to_str, lib)
{
    cr_expect(my_strcmp(int_to_str(9), "9") == 0);
    cr_expect(my_strcmp(int_to_str(0), "0") == 0);
    cr_expect(my_strcmp(int_to_str(1034), "1034") == 0);
}

Test(str_toward_delim, lib)
{
    const char *str = "Hello World is sucessfull";
    const char sep = ' ';
    char **arr = str_delime_array(str, sep);

    cr_expect(my_strcmp(arr[0], "Hello") == 0);
}

Test(my_strcmp, lib)
{
    cr_expect(my_strcmp("a", "a") == 0);
    cr_expect(my_strcmp("a", "") == 0);
    cr_expect(my_strcmp("abcdefg", "abcdefg") == 0);
    cr_expect(my_strcmp("a", "b") == -1);
    cr_expect(my_strcmp("b", "a") == 1);
}
