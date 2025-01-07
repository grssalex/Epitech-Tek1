/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-mytop-alexandre.grosse
** File description:
** swap
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include "../../../include/my.h"

/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-mytop-alexandre.grosse
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include "../../../include/my.h"

void get_swap_info(void)
{
    FILE *file = fopen("/proc/meminfo", "r");
    char line[256];
    SwapInfo_t swap_info = {0, 0, 0};

    check_file(file);
    while (fgets(line, sizeof(line), file)) {
        if (sscanf(line, "SwapTotal: %ld kB", &swap_info.total_swap) == 1 ||
            sscanf(line, "SwapFree: %ld kB", &swap_info.free_swap) == 1 ||
            sscanf(line, "MemAvailable: %ld kB",
                &swap_info.available_mem) == 1) {
        }
    }
    fclose(file);
    printw("MiB Swap: %7.1f total, %7.1f free, %7.1f used. %7.1f avail Mem\n",
        swap_info.total_swap / 1024.0,
        swap_info.free_swap / 1024.0,
        (swap_info.total_swap - swap_info.free_swap) / 1024.0,
        swap_info.available_mem / 1024.0);
}
