/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** tests_lib
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/lib.h"
#include <limits.h>

Test(my_putchar, test_my_putchar)
{
    cr_redirect_stdout();
    my_putchar('H');
    cr_assert_stdout_eq_str("H");
}

Test(my_putstr, test_my_putstr)
{
    cr_redirect_stdout();
    my_putstr("Hello World");
    cr_assert_stdout_eq_str("Hello World");
}

Test(my_put_nbr, test_my_put_nbr)
{
    cr_redirect_stdout();
    my_put_nbr(42);
    cr_assert_stdout_eq_str("42");
}

Test(my_put_nbr, test_my_put_nbr_negative)
{
    cr_redirect_stdout();
    my_put_nbr(-42);
    cr_assert_stdout_eq_str("-42");
}

Test(my_put_nbr, test_my_put_nbr_zero)
{
    cr_redirect_stdout();
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, test_my_put_nbr_max)
{
    cr_redirect_stdout();
    my_put_nbr(2147483647);
    cr_assert_stdout_eq_str("2147483647");
}

Test(my_put_nbr, test_my_put_nbr_min)
{
    cr_redirect_stdout();
    my_put_nbr(-2147483648);
    cr_assert_stdout_eq_str("-2147483648");
}

Test(my_get_nbr, test_my_get_nbr)
{
    cr_assert_eq(my_get_nbr("42"), 42);
    cr_assert_eq(my_get_nbr("-42"), -42);
    cr_assert_eq(my_get_nbr("0"), 0);
}

Test(my_get_nbr, test_my_get_nbr_max)
{
    cr_assert_eq(my_get_nbr("2147483647"), 2147483647);
}

Test(my_strupcase, test_my_strupcase)
{
    char str[] = "Hello";
    char *result = my_strupcase(str);

    cr_assert_str_eq(result, "HELLO");
}

Test(my_get_nbr, test_my_get_nbr_overflow)
{
    cr_assert_eq(my_get_nbr("2147483648"), INT_MAX);
    cr_assert_eq(my_get_nbr("-2147483649"), INT_MIN);
}

Test(my_get_nbr, test_my_get_nbr_within_limits)
{
    cr_assert_eq(my_get_nbr("2147483647"), 2147483647);
    cr_assert_eq(my_get_nbr("-2147483648"), -2147483648);
}

Test(my_strupcase, test_my_strupcase_non_lowercase)
{
    char str[] = "Hello123!";
    char *result = my_strupcase(str);

    cr_assert_str_eq(result, "HELLO123!");
}

Test(my_strlowcase, test_my_strlowcase_non_alphabetic)
{
    char str[] = "Hello123!@#";
    char *result = my_strlowcase(str);

    cr_assert_str_eq(result, "hello123!@#");
}

Test(my_isneg, test_my_isneg)
{
    cr_assert_eq(my_isneg(42), 0);
    cr_assert_eq(my_isneg(-42), 1);
    cr_assert_eq(my_isneg(0), 0);
}

Test(my_revstr, test_my_revstr)
{
    char str[] = "Hello";
    char *result = my_revstr(str);

    cr_assert_str_eq(result, "olleH");
}

Test(my_strlen, test_my_strlen)
{
    cr_assert_eq(my_strlen("Hello"), 5);
    cr_assert_eq(my_strlen("World"), 5);
    cr_assert_eq(my_strlen("Hello World"), 11);
}

Test(my_strcmp, test_my_strcmp_basic)
{
    cr_assert_eq(my_strcmp("Hello", "Hello"), 0);
    cr_assert_eq(my_strcmp("Hello", "World"), -15);
    cr_assert_eq(my_strcmp("World", "Hello"), 15);
}

Test(my_strcmp, test_my_strcmp_empty)
{
    cr_assert_eq(my_strcmp("", ""), 0);
    cr_assert_eq(my_strcmp("Hello", ""), 'H');
    cr_assert_eq(my_strcmp("", "World"), -'W');
}

Test(my_strcmp, test_my_strcmp_case_sensitive)
{
    cr_assert_eq(my_strcmp("hello", "Hello"), 'h' - 'H');
    cr_assert_eq(my_strcmp("Hello", "hello"), 'H' - 'h');
}

Test(my_strcmp, test_my_strcmp_partial_match)
{
    cr_assert_eq(my_strcmp("Hello", "Hell"), 'o');
    cr_assert_eq(my_strcmp("Hell", "Hello"), -'o');
}

Test(my_strncmp, test_my_strncmp_basic)
{
    cr_assert_eq(my_strncmp("Hello", "Hello", 5), 0);
    cr_assert_eq(my_strncmp("Hello", "World", 5), -15);
    cr_assert_eq(my_strncmp("World", "Hello", 5), 15);
}

Test(my_strstr, test_my_strstr)
{
    cr_assert_str_eq(my_strstr("Hello World", "World"), "World");
    cr_assert_str_eq(my_strstr("Hello World", "Hello"), "Hello World");
    cr_assert_null(my_strstr("Hello World", "Hello World!"));
}

Test(my_strstr, test_my_strstr_empty)
{
    cr_assert_str_eq(my_strstr("", ""), "");
    cr_assert_str_eq(my_strstr("Hello", ""), "Hello");
    cr_assert_null(my_strstr("", "World"));
}

Test(my_strstr, test_my_strstr_case_sensitive)
{
    cr_assert_null(my_strstr("hello", "Hello"));
    cr_assert_null(my_strstr("Hello", "hello"));
}

Test(my_strncpy, test_my_strncpy)
{
    char dest[6];
    char src[] = "Hello";

    my_strncpy(dest, src, 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, test_my_strncpy_partial)
{
    char dest[6];
    char src[] = "Hello";

    my_strncpy(dest, src, 3);
    cr_assert_str_eq(dest, "Hel");
}

Test(my_strncpy, test_my_strncpy_partial_copy)
{
    char dest[10];
    char src[] = "Hello";
    my_strncpy(dest, src, 10);
    cr_assert_str_eq(dest, "Hello");
    cr_assert_eq(dest[5], '\0');
    cr_assert_eq(dest[6], '\0');
    cr_assert_eq(dest[7], '\0');
    cr_assert_eq(dest[8], '\0');
    cr_assert_eq(dest[9], '\0');
}

Test(my_swap, test_my_swap)
{
    int a = 42;
    int b = 24;

    my_swap(&a, &b);
    cr_assert_eq(a, 24);
    cr_assert_eq(b, 42);
}

Test(my_concat_strings, test_my_concat_strings)
{
    char str1[] = "Hello";
    char str2[] = "World";
    char *result = my_concat_strings(str1, str2);

    cr_assert_str_eq(result, "HelloWorld");
}

Test(my_strcpy, test_my_strcpy)
{
    char str1[] = "Hello";
    char str2[] = "World";
    char *result = my_strcpy(str1, str2);

    cr_assert_str_eq(result, "World");
}

Test(my_strdup, test_my_strdup)
{
    char str[] = "Hello";
    char *result = my_strdup(str);

    cr_assert_str_eq(result, "Hello");
}
