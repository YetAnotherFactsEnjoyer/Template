/*
** EPITECH PROJECT, 2025
** my.h
** File description:
** my_h
*/

#ifndef MY_H
    #define MY_H

    #include <stdlib.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <dirent.h>
    #include <sys/stat.h>
    #include <stdio.h>
    #include <stddef.h>
    #include <stdio.h>
    #include <stdbool.h>
    #include <math.h>

enum {
    EXIT_ERROR = 84,
    EXIT_FAIL = -1,
};

//  ** /SRC **  //

// ** template **  //
size_t template(const char *argv[]);

//  ** /LIB **  //

//  ** write **  //
int write_char(const char c);
int write_text(const char *str);
int write_arr(const char **arr);

//  ** compare **  //
size_t cmp_str(const char *s1, const char *s2);
size_t cmp_n_str(const char *s1, const char *s2, const size_t limit);

//  ** len **  //
size_t str_len(const char *str);
size_t get_arr_len(const char **line);
size_t get_nb_len(const size_t nb);

//  ** convert **  //
int str_to_int(const char *str);
char *int_to_str(int nb);
char **cut(const char *str, const char *sep);

//  ** read file **  //
char *read_file(const char *filepath);

//  ** copy **  //
void cpy_str(char *dest, const char *src);
void cpy_n_str(char *dest, const char *src, const size_t limit);
void cpy_arr(char **dest, const char **src);
void cpy_n_arr(char **dest, const char **src, const size_t limit);

//  ** duplicate **  //
char *dup_str(const char *str);
char *dup_n_str(const char *str, const size_t limit);

#endif
