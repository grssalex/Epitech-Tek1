/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-bsmytop-alexandre.grosse
** File description:
** hboot_time
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>
#include <fcntl.h>
#include <unistd.h>

// fonction qui récupère le temps depuis le boot
// on ouvre le fichier /proc/uptime
// les if servent à gérer les erreurs
// qui sont si le fichier n'est pas ouvert ou
// si la lecture du fichier est impossible
// buffer de 310 car double prend 308 carateres max
double get_uptime(void)
{
    int fd;
    char buffer[310];
    ssize_t bytes_read;
    double uptime;

    fd = open("/proc/uptime", O_RDONLY);
    if (fd == -1) {
        return -1;
    }
    bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read == -1) {
        close(fd);
        return -1;
    }
    buffer[bytes_read] = '\0';
    close(fd);
    if (sscanf(buffer, "%lf", &uptime) != 1) {
        return -1;
    }
    return uptime;
}

// fonction qui affiche le temps depuis le boot
// premier if si le temps est inférieur à 1h on affiche en minutes
// sinon on affiche sous la forme 00:00
void display_boot_time(void)
{
    double uptime = get_uptime();
    int days = (int)uptime / 86400;
    int hours = ((int)uptime % 86400) / 3600;
    int minutes = ((int)uptime % 3600) / 60;

    if (uptime == -1) {
        return;
    }
    if (uptime < 3600) {
        printw("%d min", minutes);
    } else if (uptime < 86400) {
        printw("%d:%02d", hours, minutes);
    } else {
        printw("%d days %d:%02d", days, hours, minutes);
    }
}
