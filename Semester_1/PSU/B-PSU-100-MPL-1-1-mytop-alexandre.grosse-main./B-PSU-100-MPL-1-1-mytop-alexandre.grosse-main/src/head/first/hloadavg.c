/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-bsmytop-alexandre.grosse
** File description:
** hloadavg
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "../../../include/my.h"
#include <ncurses.h>

// verifie si le nombre d'éléments est valide
// on renvoie -1 si le nombre d'éléments est inférieur
// à 0 ou supérieur à 3
int check_nelem(int nelem)
{
    if (nelem <= 0 || nelem > 3) {
        printf("Error: nelem is invalid (can't inf 0 and sup 3)\n");
        return -1;
    }
    return 0;
}

// fonction qui stock les valeurs du load average
// dans une structure pour les réutiliser plus tard
void set_loadavg(double loadavg[], int nelem,
    struct loadavg_struct *loadavg_struct)
{
    FILE *loadavg_file = fopen("/proc/loadavg", "r");

    if (nelem >= 1)
        loadavg[0] = loadavg_struct->one_minutes;
    if (nelem >= 2)
        loadavg[1] = loadavg_struct->five_minutes;
    if (nelem == 3)
        loadavg[2] = loadavg_struct->fifteen_minutes;
    fclose(loadavg_file);
}

// fonction qui récupère le load average
// dans le fichier /proc/loadavg
// on y recupere les 3 valeurs et onles stocke dans un tableau
// on renvoie -1 si le fichier n'est pas ouvert
// on renvoie -1 si la lecture du fichier est impossible
// on renvoie -1 si le nombre d'éléments est inférieur à 0 ou supérieur à 3
// on renvoie le nombre d'éléments si tout s'est bien passé
int my_getloadavg(double loadavg[], int nelem)
{
    double one_minutes;
    double five_minutes;
    double fifteen_minutes;
    FILE *loadavg_file = fopen("/proc/loadavg", "r");

    if (loadavg_file == NULL) {
        return -1;
    }
    if (fscanf(loadavg_file, "%lf %lf %lf", &one_minutes,
            &five_minutes, &fifteen_minutes) != 3) {
        fclose(loadavg_file);
        return -1;
    }
    if (check_nelem(nelem) == -1) {
        fclose(loadavg_file);
        return -1;
    }
    set_loadavg(loadavg, nelem, &(struct loadavg_struct)
        {one_minutes, five_minutes, fifteen_minutes});
    return nelem;
}

// fonction qui affiche le load average
void display_loadavg(void)
{
    double loadavg[3];
    int nelem = 3;
    int result = my_getloadavg(loadavg, nelem);

    if (result != -1) {
        printw("load average:");
        for (int i = 0; i < result; i++) {
            printw(" %.2f,", loadavg[i]);
        }
        printw("\n");
    }
}
