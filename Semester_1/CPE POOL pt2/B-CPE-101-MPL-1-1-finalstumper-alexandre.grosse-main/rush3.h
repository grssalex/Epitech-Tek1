/*
** EPITECH PROJECT, 2024
** rush3.h
** File description:
** rush3.h
*/

#ifndef RUSH3_H
    #define RUSH3_H
    #include <unistd.h>
    #include <stdio.h>
int my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char *str);
int my_revstr(char *str);
int my_putint(int number);
int handle_special_cases(int *square);
int my_printsqr(int *square);
int handle_a(char *buf);
int my_puterr(char *str);
int my_getheight(char *buf);
int my_getlen(char *buf);
int my_getformat(char *buf);
int my_getsqr(int *square, char *buf);
int my_putstro(char *str);
int getsqr(void);
#endif
