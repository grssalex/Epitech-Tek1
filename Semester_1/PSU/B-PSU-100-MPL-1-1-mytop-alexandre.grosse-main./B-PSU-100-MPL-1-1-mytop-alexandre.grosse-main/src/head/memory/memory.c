/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-mytop-alexandre.grosse
** File description:
** memory
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include "../../../include/my.h"

//scanf prend le buffer et analyse ce qu'il y a entre " ", puis
// on met le %lf dnas le ->xx donné par le pointeur mem_info ( structure )
void read_memory_info(MemoryInfo_t *mem_info)
{
    FILE *mem_info_file;
    char buffer[256];

    mem_info_file = fopen("/proc/meminfo", "r");
    check_file(mem_info_file);
    while (fgets(buffer, sizeof(buffer), mem_info_file)) {
        sscanf(buffer, "MemTotal: %lf kB", &mem_info->total_mem);
        sscanf(buffer, "MemFree: %lf kB", &mem_info->free_mem);
        sscanf(buffer, "MemAvailable: %lf kB", &mem_info->available_mem);
        sscanf(buffer, "Buffers: %lf kB", &mem_info->buffers);
        sscanf(buffer, "Cached: %lf kB", &mem_info->cached);
    }
    fclose(mem_info_file);
    mem_info->used_mem = mem_info->total_mem - mem_info->free_mem -
        mem_info->buffers - mem_info->cached;
    mem_info->total_mem /= 1024;
    mem_info->free_mem /= 1024;
    mem_info->used_mem /= 1024;
    mem_info->buffers /= 1024;
    mem_info->cached /= 1024;
}

void display_memory_info(void)
{
    MemoryInfo_t mem_info = {0};

    read_memory_info(&mem_info);
    printw("MiB Mem :  %.1f total,  %.1f free,  %.1f used,  %.1f buff/cache\n",
        mem_info.total_mem, mem_info.free_mem, mem_info.used_mem,
        mem_info.buffers + mem_info.cached);
}
