/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-myls-alexandre.grosse
** File description:
** read_other
*/

#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include "../include/my.h"

void time2(const char *day, const char *hour, const char *minute)
{
    if (minute[0] == ' ')
        my_putchar('0');
    my_putstr(minute);
    my_putchar(' ');
    my_putchar(':');
    if (day[0] == ' ')
        my_putchar('0');
    my_putstr(day);
    my_putchar(' ');
    if (hour[0] == ' ')
        my_putchar('0');
    my_putstr(hour);
}

void display_time(const char *time_str)
{
    char month[4];
    char day[3];
    char hour[3];
    char minute[3];

    my_strcpy2(month, time_str + 4, 3);
    month[3] = '\0';
    my_strcpy2(day, time_str + 8, 2);
    day[2] = '\0';
    my_strcpy2(hour, time_str + 11, 2);
    hour[2] = '\0';
    my_strcpy2(minute, time_str + 14, 2);
    minute[2] = '\0';
    my_putstr(month);
    my_putchar(' ');
    time2(day, hour, minute);
}

void display_other_ls_l(uid_t uid, gid_t gid)
{
    struct passwd *pw = getpwuid(uid);
    struct group *grp = getgrgid(gid);

    if (pw != NULL) {
        my_putstr(pw->pw_name);
        my_putchar(' ');
    }
    if (grp != NULL) {
        my_putstr(grp->gr_name);
        my_putchar(' ');
    }
}

void display_file_info(struct stat *file_stat,
    const char *time_str, struct dirent *entry)
{
    display_permissions(file_stat->st_mode);
    my_put_nbr(file_stat->st_nlink);
    my_putchar(' ');
    display_other_ls_l(file_stat->st_uid, file_stat->st_gid);
    my_put_nbr(file_stat->st_size);
    my_putchar(' ');
    display_time(time_str);
    my_putstr(entry->d_name);
    my_putstr("\n");
}

void process_entry(const char *path, struct dirent *entry)
{
    struct stat file_stat;
    char filepath[1024];
    const char *time_str;

    build_filepath(filepath, path, entry->d_name);
    if (stat(filepath, &file_stat) == -1) {
        return;
    }
    time_str = ctime(&file_stat.st_mtime);
    display_file_info(&file_stat, time_str, entry);
}
