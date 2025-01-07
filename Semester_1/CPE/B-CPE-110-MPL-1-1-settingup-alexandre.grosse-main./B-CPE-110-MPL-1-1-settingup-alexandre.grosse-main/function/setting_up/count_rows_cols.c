/*
** EPITECH PROJECT, 2024
** B-CPE-110-MPL-1-1-settingup-alexandre.grosse
** File description:
** count_rows
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "../../include/my.h"

int count_rows(char const *filepath, int x)
{
    int fd = open(filepath, O_RDONLY);
    int rows = 0;
    char *buffer = malloc(sizeof(char) * x);
    int bytes_read = read(fd, buffer, x);

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n') {
            rows++;
        }
    }
    close(fd);
    return rows;
}
