/*
** EPITECH PROJECT, 2024
** B-CPE-101-MPL-1-1-myprintf-hugo.soulet
** File description:
** callpercent.c
*/

#include "../../../include/my.h"
#include <stdarg.h>
#include <stddef.h>

const format_function_t format_functions0[] = {
    {'d', handle_d},
    {'i', handle_i},
    {'u', handle_u},
    {'x', handle_x},
    {'X', handle_x_big},
    {'o', handle_o},
    {'f', handle_f},
    {'e', handle_e},
    {'E', handle_e_big},
    {'g', handle_g},
    {'G', handle_g_big},
    {'c', handle_c},
    {'s', handle_s},
    {'p', handle_p},
    {'%', handle_percent},
    {'n', handle_n},
    {' ', handle_space},
    {'+', handle_plus},
    {'.', handle_dot},
    {0, NULL}
};

int handle_n(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    int *n = va_arg(arguments, int *);

    *n = 0;
    return 0;
}

int call_percent2(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    for (int j = 0; format_functions0[j].format_char != 0; ++j) {
        if (format[i + 1] == format_functions0[j].format_char) {
            return format_functions0[j].function(format,
                arguments, i, format_info);
        }
    }
    return 0;
}

int call_percent(const char *format, va_list arguments, int i)
{
    format_detection_t format_info = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int j = 0; format_functions0[j].format_char != 0; ++j) {
        if (format[i + 1] == format_functions0[j].format_char) {
            return format_functions0[j].function(format,
                arguments, i, format_info);
        }
    }
    return 0;
}
