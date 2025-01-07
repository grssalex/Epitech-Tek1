/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-bsmytop-alexandre.grosse
** File description:
** htime
*/

#include <stdio.h>
#include <time.h>
#include <ncurses.h>
#include <string.h>

// fonction qui affiche l'heure actuelle
// on utilise la variable rawtime pour stocker le temps actuel
// on utilise la fonction ctime pour récupérer le temps actuel
// strncpy permet de copier les 8 caractères de l'heure actuelle dans time_only
void display_time(void)
{
    time_t rawtime;
    char *time_str;
    char time_only[9];

    time(&rawtime);
    time_str = ctime(&rawtime);
    strncpy(time_only, &time_str[11], 8);
    time_only[8] = '\0';
    printw("%s", time_only);
}
