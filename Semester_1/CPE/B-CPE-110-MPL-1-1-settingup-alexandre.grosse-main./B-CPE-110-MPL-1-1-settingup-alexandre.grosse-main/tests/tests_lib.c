/*
** EPITECH PROJECT, 2024
** lib_c
** File description:
** tests_lib.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

Test(my_putchar, test_putchar)
{
    cr_redirect_stdout();
    my_putchar('A');
    cr_assert_stdout_eq_str("A");
}

Test(my_put_float, test_put_float)
{
    cr_redirect_stdout();
    my_put_float(3.14);
    cr_assert_stdout_eq_str("3.14");
}

Test(my_put_float, test_put_float_with_decimal)
{
    cr_redirect_stdout();
    my_put_float(3.14);
    cr_assert_stdout_eq_str("3.14");
}

Test(my_put_float, test_put_float_without_decimal)
{
    cr_redirect_stdout();
    my_put_float(3.00);
    cr_assert_stdout_eq_str("3.00");
}

Test(my_put_nbr, test_put_nbr)
{
    cr_redirect_stdout();
    my_put_nbr(42);
    cr_assert_stdout_eq_str("42");
}

Test(my_putstr, test_putstr)
{
    cr_redirect_stdout();
    my_putstr("Hello, World!");
    cr_assert_stdout_eq_str("Hello, World!");
}

Test(my_strlen, test_strlen)
{
    cr_assert_eq(my_strlen("Hello, World!"), 13);
}

Test(my_revstr, test_revstr)
{
    char str[] = "Hello";
    cr_assert_str_eq(my_revstr(str), "olleH");
}

Test(my_strcpy, test_strcpy)
{
    char dest[6];
    my_strcpy(dest, "Hello");
    cr_assert_str_eq(dest, "Hello");
}

Test(my_swap, test_swap)
{
    int a = 1, b = 2;
    my_swap(&a, &b);
    cr_assert_eq(a, 2);
    cr_assert_eq(b, 1);
}

Test(my_isneg, test_isneg)
{
    cr_assert_eq(my_isneg(-1), 1);
    cr_assert_eq(my_isneg(1), 0);
}

Test(my_getnbr, test_getnbr)
{
    cr_assert_eq(my_getnbr("1234"), 1234);
}

Test(my_getnbr, test_number_conversion)
{
    cr_assert_eq(my_getnbr("0"), 0);
    cr_assert_eq(my_getnbr("1234"), 1234);
    cr_assert_eq(my_getnbr("0001234"), 1234);
    cr_assert_eq(my_getnbr("1234abc"), 1234);
    cr_assert_eq(my_getnbr("abc1234"), 0);
}

Test(my_getnbr, test_sign_handling1)
{
    cr_assert_eq(my_getnbr("-1234"), -1234);
    cr_assert_eq(my_getnbr("+1234"), 1234);
    cr_assert_eq(my_getnbr("1234"), 1234);
    cr_assert_eq(my_getnbr("--1234"), 1234);
    cr_assert_eq(my_getnbr("+-1234"), -1234);
    cr_assert_eq(my_getnbr("-+1234"), -1234);
}

Test(my_put_nbr, test_put_nbr_negative)
{
    cr_redirect_stdout();
    my_put_nbr(-1234);
    cr_assert_stdout_eq_str("-1234");
}

Test(my_put_nbr, test_put_nbr_zero)
{
    cr_redirect_stdout();
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, test_put_nbr_positive)
{
    cr_redirect_stdout();
    my_put_nbr(5678);
    cr_assert_stdout_eq_str("5678");
}
