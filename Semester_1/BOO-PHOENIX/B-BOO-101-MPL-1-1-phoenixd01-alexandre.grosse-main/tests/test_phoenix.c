/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd01-alexandre.grosse
** File description:
** test_phoenix
*/

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

Test(show_number, test_show_nbr)
{
    cr_redirect_stdout();
    show_number(42);
    cr_assert_stdout_eq_str("42");
}

Test(show_number, test_show_nbr12)
{
    cr_redirect_stdout();
    show_number(-2147483648);
    cr_assert_stdout_eq_str("-2147483648");
}

Test(show_number, test_put_nbr_negative)
{
    cr_redirect_stdout();
    show_number(-1234);
    cr_assert_stdout_eq_str("-1234");
}

Test(show_number, test_show_nbr_zero)
{
    cr_redirect_stdout();
    show_number(0);
    cr_assert_stdout_eq_str("0");
}

Test(show_number, test_show_nbrx)
{
    cr_redirect_stdout();
    show_number(5678);
    cr_assert_stdout_eq_str("5678");
}

Test(show_string, test_show_str)
{
    cr_redirect_stdout();
    show_string("Hello, World!");
    cr_assert_stdout_eq_str("Hello, World!");
}

Test(to_number, test_to_nb2)
{
    cr_assert_eq(to_number("0"), 0);
    cr_assert_eq(to_number("1234"), 1234);
    cr_assert_eq(to_number("0001234"), 1234);
    cr_assert_eq(to_number("1234abc"), 1234);
    cr_assert_eq(to_number("abc1234"), 0);
}

Test(to_number, test_to_nbr3)
{
    cr_assert_eq(to_number("-1234"), -1234);
    cr_assert_eq(to_number("+1234"), 1234);
    cr_assert_eq(to_number("1234"), 1234);
    cr_assert_eq(to_number("--1234"), 1234);
    cr_assert_eq(to_number("+-1234"), -1234);
    cr_assert_eq(to_number("-+1234"), -1234);
}

Test(reverse_string, rev1)
{
    char str[] = "a";

    cr_redirect_stdout();
    reverse_string(str);
    cr_assert_stdout_eq_str("");
}

Test(show_alphabet, alpha)
{

    cr_redirect_stdout();
    show_alphabet();
    cr_assert_stdout_eq_str("abcdefghijklmnopqrstuvwxyz");
}

Test(show_combinations, comb)
{
    cr_redirect_stdout();
    show_combinations();
    cr_assert_stdout_eq_str("012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789");
}