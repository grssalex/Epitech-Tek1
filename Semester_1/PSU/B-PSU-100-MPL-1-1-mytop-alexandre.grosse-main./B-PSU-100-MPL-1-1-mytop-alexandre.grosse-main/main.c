/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-bsmytop-alexandre.grosse
** File description:
** main
*/
#include <ncurses.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

void line_color(void)
{
    attron(A_STANDOUT);
    printw("    PID USER      PR  NI    VIRT    RES    SHR S  %%CPU  %%MEM");
    printw("    TIME+ COMMAND   ");
    attroff(A_STANDOUT);
}

int main(void)
{
    int q_keyboard = getch();

    initscr();
    cbreak();
    noecho();
    nodelay(stdscr, TRUE);
    while ((q_keyboard) != 'q') {
        clear();
        head();
        line_color();
        back();
        refresh();
        timeout(1000);
        q_keyboard = getch();
    }
    endwin();
    return 0;
}
