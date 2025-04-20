/*
** EPITECH PROJECT, 2025
** stumper
** File description:
** read file
*/


#include "my.h"

char *read_file(const char *filepath)
{
    const int fd = open(filepath, O_RDONLY);
    char *buff = NULL;
    struct stat st;

    if (stat(filepath, &st) == -1 || fd == -1)
        return NULL;
    buff = malloc(sizeof(char) * st.st_size);
    read(fd, buff, st.st_size);
    buff[st.st_size] = '\0';
    close(fd);
    return buff;
}
