/*
** EPITECH PROJECT, 2024
** B-CPE-110-MPL-1-1-settingup-alexandre.grosse
** File description:
** replace_char_to_int.c
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "../../include/my.h"

void replace(char *buffer, int i)
{
    if (buffer[i] == 'o') {
        buffer[i] = '0';
    } else if (buffer[i] == '.') {
        buffer[i] = '1';
    }
}

void replace_chars_in_buffer(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++) {
        replace(buffer, i);
    }
}

int replace_char_to_int(char const *filepath, int x)
{
    char *buffer;
    int file_size;

    if (read_file(filepath, &buffer, &x) == -1) {
        return -1;
    }
    replace_chars_in_buffer(buffer);
    my_putstr(buffer);
    free(buffer);
    return 0;
}
