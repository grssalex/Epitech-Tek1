/*
** EPITECH PROJECT, 2024
** Pool
** File description:
** bsprintf.h
*/
#include <stdarg.h>

#ifndef MY_H
    #define MY_H
    #define STRUCT
    #define STRUCT2

typedef struct {
    int width;
    int precision;
    int hash;
    int zero;
    int minus;
    int plus;
    int space;
    int length;
    int star;
} format_detection_t;

typedef struct {
    char format_char;
    int (*function)(const char *format, va_list arguments, int i,
        format_detection_t format_info);
} format_function_t;

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int n);
int my_printf(const char *format, ...);
int my_strlen(char const *str);
int percent_e(float nb, int c, int precision, format_detection_t format_info);
void percent_big_e(float nb);
int nbr_length(int n, int somme);
int my_putfloat(float nb, int c, int precision,
    format_detection_t format_info);
int percent_u(const char *format, va_list arguments, int i, int j);
int if_string(const char *format, va_list arguments, int i);
int if_nbr(const char *format, va_list arguments, int i,
    format_detection_t format_info);
int call_percent(const char *format, va_list arguments, int i);
int percent_p(void *ptr);
int percent_bip(char *pointeur);
void my_put_nbr_base(unsigned long nbr, char *base);
int call_percent2(const char *format, va_list arguments, int i,
    format_detection_t format_info);

int space_positive_number(const char *format, int i);
int handle_plus(const char *format, va_list arguments, int i,
    format_detection_t format_info);
int call_other1(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_big_e(const char *format, va_list arguments, int i,
    format_detection_t format_info);
int handle_d(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_i(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_u(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_x(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_f(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_e(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_e_big(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_g(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_c(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_s(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_p(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int percent_g(float nb, int c, int precision,
    format_detection_t format_info);
int handle_space(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_percent(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int handle_n(const char *format, va_list arguments, int i,
    format_detection_t format_inf);
int verify_formatint(int nb, int c, int precision,
    format_detection_t format_info);

int percent_x(int n, int base);
int handle_g_big(const char *format, va_list arguments, int i,
    format_detection_t format_info);
int percent_g_big(float nb, int c, int precision,
    format_detection_t format_info);
int handle_dot(const char *format, va_list arguments, int i,
    format_detection_t format_info);

int percent_e_big(float nb, int c, int precision,
    format_detection_t format_info);
void percent_big_e(float nb);
int percent_e_big4(float *nb, int *a, int *b);
int percent_e_big3(float *nb, int *a);
int percent_e2_big(int a);
int percent_e3_big(float *nb, int *a);

int percent_e(float nb, int c, int precision, format_detection_t format_info);
int percent_e2(int exponent);
int percent_e3(float *nb, int *a);
int percent_e4(float *nb, int *a, int *b);
int percent_e4_big(float *nb, int *a, int *b);

float verify_format(float nb, int c, int precision,
    format_detection_t format_info);
int verify_precision(float nb, int c, int precision,
    format_detection_t format_info);

int percent_e_big(float nb, int c, int precision,
    format_detection_t format_info);

int percent_e_big4(float *nb, int *a, int *b);
int handle_e_big(const char *format, va_list arguments,
    int i, format_detection_t format_info);

int handle_o(const char *format, va_list arguments,
    int i, format_detection_t format_info);
int handle_x_big(const char *format, va_list arguments,
    int i, format_detection_t format_info);

int percent_o(unsigned int n, int base);


#endif
