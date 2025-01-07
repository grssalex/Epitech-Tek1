/*
** EPITECH PROJECT, 2024
** my_revstr.c
** File description:
** --
*/

/*
** Fonction qui inverse une chaine de caractere
** exemple : "Hello" devient "olleH"
** -
** la premeire boucle while permet de recuperer
** la longueur de la chaine de caractere
** -
** la deuxieme boucle while permet d'inverser la chaine
** en echangeant les caracteres de chaque extremité
** -
** tmp permet de stocker un caractere temporairement
** et len est la longueur de la chaine
** tandis que longueur_chaine est la longueur de la chaine - 1
** pour pouvoir commencer a inverser la chaine
*/

char *my_revstr(char *str)
{
    int index_debut_chaine = 0;
    int len = 0;
    int longueur_chaine = 0;
    char tmp;

    while (str[len] != '\0') {
        len++;
    }
    longueur_chaine = len - 1;
    while (index_debut_chaine < len / 2) {
        tmp = str[index_debut_chaine];
        str[index_debut_chaine] = str[longueur_chaine];
        str[longueur_chaine] = tmp;
        index_debut_chaine++;
        longueur_chaine--;
    }
    return str;
}
