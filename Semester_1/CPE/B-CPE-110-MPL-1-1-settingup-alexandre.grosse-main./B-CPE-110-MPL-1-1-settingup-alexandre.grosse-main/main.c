/*
** EPITECH PROJECT, 2024
** B-CPE-110-MPL-1-1-settingup-alexandre.grosse
** File description:
** main.c
*/
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "./include/my.h"

int main(int argc, char **argv)
{
    char *filepath = argv[1];
    int x = get_file_size(filepath);
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * get_file_size(filepath));
    int bytes_read = read(fd, buffer, x);

    if (replace_char_to_int(filepath, x) == -1) {
        return 1;
    }
    open_fd(fd);
    if (bytes_read == -1) {
        my_putstr("Failed to read file");
        close(fd);
        return 1;
    }
    my_putstr(buffer);
    free(buffer);
    close(fd);
    return 0;
}
