/*
** EPITECH PROJECT, 2024
** B-CPE-110-MPL-1-1-settingup-alexandre.grosse
** File description:
** count_lines_and_columns.c
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "../../include/my.h"
#include <sys/stat.h>
#include <stdlib.h>

int open_fd(int fd)
{
    if (fd == -1){
        my_putstr("FAILURE\n");
        return -1;
    }
    return 0;
}

int get_file_size(const char *filepath)
{
    struct stat st;

    if (stat(filepath, &st) == -1) {
        my_putstr("failed to get file ( get file size function)\n");
        return -1;
    }
    return st.st_size;
}

int open_and_read_file(const char *filepath, char **buffer, int file_size)
{
    int fd = open(filepath, O_RDONLY);
    int bytes_read;

    if (open_fd(fd) == -1) {
        return -1;
    }
    buffer = malloc(file_size + 1);
    if (*buffer == NULL) {
        close(fd);
        return -1;
    }
    bytes_read = read(fd, *buffer, file_size);
    if (bytes_read == -1) {
        free(*buffer);
        close(fd);
        return -1;
    }
    (*buffer)[bytes_read] = '\0';
    close(fd);
    return 0;
}

int read_file(const char *filepath, char **buffer, int *file_size)
{
    if (get_file_size(filepath) == -1) {
        return -1;
    }
    if (open_and_read_file(filepath, buffer, *file_size) == -1) {
        return -1;
    }
    return 0;
}
