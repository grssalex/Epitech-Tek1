/*
** EPITECH PROJECT, 2024
** myprintf--fichier hugo
** File description:
** test_my_printf.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdarg.h>
#include "../include/my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("Hello, World!\n");
    cr_assert_stdout_eq_str("Hello, World!\n");
}

Test(my_putchar, single_character, .init = redirect_all_std)
{
    my_putchar('A');
    cr_assert_stdout_eq_str("A");
}

Test(my_putstr, single_string, .init = redirect_all_std)
{
    my_putstr("aaaa");
    cr_assert_stdout_eq_str("aaaa");
}

Test(my_put_nbr, positive_number, .init = redirect_all_std)
{
    my_put_nbr(12345);
    cr_assert_stdout_eq_str("12345");
}

Test(my_put_nbr, negative_number, .init = redirect_all_std)
{
    my_put_nbr(-12345);
    cr_assert_stdout_eq_str("-12345");
}

Test(my_put_nbr, zero, .init = redirect_all_std)
{
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_putfloat, positive_float, .init = redirect_all_std)
{
    format_detection_t format_info = {0, 3, 0, 0, 0, 0, 0, 0, 0};
    my_putfloat(123.456, 0, 3, format_info);
    cr_assert_stdout_eq_str("123.456");
}

Test(my_putfloat, float_with_padding, .init = redirect_all_std)
{
    format_detection_t format_info = {0, 2, 0, 0, 0, 0, 0, 0, 0};
    my_putfloat(12.34, 10, 2, format_info);
    cr_assert_stdout_eq_str("     12.34");
}

Test(my_strlen, empty_string)
{
    cr_assert_eq(my_strlen(""), 0);
}

Test(my_strlen, single_character)
{
    cr_assert_eq(my_strlen("A"), 1);
}

Test(my_strlen, multiple_characters)
{
    cr_assert_eq(my_strlen("Hello, World!"), 13);
}

Test(my_strlen, string_with_spaces)
{
    cr_assert_eq(my_strlen("Hello, World! "), 14);
}

Test(nbr_length, zero)
{
    cr_assert_eq(nbr_length(0, 0), 1);
}

Test(nbr_length, positive_number)
{
    cr_assert_eq(nbr_length(12345, 0), 5);
}

Test(nbr_length, single_digit)
{
    cr_assert_eq(nbr_length(7, 0), 1);
}

Test(my_put_nbr_base, positive_number, .init = redirect_all_std)
{
    my_put_nbr_base(12345, "0123456789ABCDEF");
    cr_assert_stdout_eq_str("3039");
}

Test(my_put_nbr_base, zero, .init = redirect_all_std)
{
    my_put_nbr_base(0, "0123456789ABCDEF");
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr_base, large_number, .init = redirect_all_std)
{
    my_put_nbr_base(4294967295, "0123456789ABCDEF");
    cr_assert_stdout_eq_str("FFFFFFFF");
}

Test(percent_e4, negative_number, .init = redirect_all_std)
{
    float nb = -123.456;
    int a = 0;
    int b = 0;
    int result = percent_e4(&nb, &a, &b);
    cr_assert_eq(result, 1);
    cr_assert_float_eq(nb, 123.456, 0.001);
    cr_assert_eq(a, 1);
    cr_assert_eq(b, 1);
    cr_assert_stdout_eq_str("-");
}

Test(percent_e4, positive_number, .init = redirect_all_std)
{
    float nb = 123.456;
    int a = 0;
    int b = 0;
    int result = percent_e4(&nb, &a, &b);
    cr_assert_eq(result, 0);
    cr_assert_float_eq(nb, 123.456, 0.001);
    cr_assert_eq(a, 0);
    cr_assert_eq(b, 0);
    cr_assert_stdout_eq_str("");
}

Test(percent_e3, large_number)
{
    float nb = 12345.678;
    int a = 0;
    percent_e3(&nb, &a);
    cr_assert_float_eq(nb, 1.2345678, 0.000001);
    cr_assert_eq(a, 4);
}

Test(percent_e3, small_number)
{
    float nb = 0.001234;
    int a = 0;
    percent_e3(&nb, &a);
    cr_assert_float_eq(nb, 1.234, 0.001);
    cr_assert_eq(a, -3);
}

Test(percent_e2, positive_exponent, .init = redirect_all_std)
{
    percent_e2(5);
    cr_assert_stdout_eq_str("e+05");
}

Test(percent_e2, negative_exponent, .init = redirect_all_std)
{
    percent_e2(-5);
    cr_assert_stdout_eq_str("e-05");
}

Test(percent_e, zero, .init = redirect_all_std)
{
    format_detection_t format_info = {0, 6, 0, 0, 0, 0, 0, 0, 0};
    int result = percent_e(0.0, 0, 6, format_info);
    cr_assert_eq(result, 7);
    cr_assert_stdout_eq_str("0.0e+00");
}

Test(percent_e, positive_number, .init = redirect_all_std)
{
    format_detection_t format_info = {0, 6, 0, 0, 0, 0, 0, 0, 0};
    int result = percent_e(12345.678, 0, 6, format_info);
    cr_assert_eq(result, 12);
    cr_assert_stdout_eq_str("1.234568e+04");
}

Test(percent_x, positive_number, .init = redirect_all_std)
{
    int result = percent_x(12345, 16);
    cr_assert_eq(result, 4);
    cr_assert_stdout_eq_str("3039");
}


Test(percent_x, zero, .init = redirect_all_std)
{
    int result = percent_x(0, 16);
    cr_assert_eq(result, 1);
    cr_assert_stdout_eq_str("0");
}

Test(percent_x, small_number, .init = redirect_all_std)
{
    int result = percent_x(15, 16);
    cr_assert_eq(result, 1);
    cr_assert_stdout_eq_str("f");
}

int call_percent_test(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int result = call_percent(format, args, 0);
    va_end(args);
    return result;
}

Test(call_percent, handle_d, .init = redirect_all_std)
{
    int result = call_percent_test("%d", 123);
    cr_assert_eq(result, 3);
    cr_assert_stdout_eq_str("123");
}

Test(call_percent, handle_i, .init = redirect_all_std)
{
    int result = call_percent_test("%i", 456);
    cr_assert_eq(result, 3);
    cr_assert_stdout_eq_str("456");
}

Test(call_percent, handle_u, .init = redirect_all_std)
{
    int result = call_percent_test("%u", 789);
    cr_assert_eq(result, 3);
    cr_assert_stdout_eq_str("789");
}

Test(call_percent, handle_x, .init = redirect_all_std)
{
    int result = call_percent_test("%x", 255);
    cr_assert_eq(result, 2);
    cr_assert_stdout_eq_str("ff");
}

Test(call_percent, handle_percent, .init = redirect_all_std)
{
    int result = call_percent_test("%%");
    cr_assert_eq(result, 1);
    cr_assert_stdout_eq_str("%");
}

Test(nbr_length, negative_number)
{
    cr_assert_eq(nbr_length(-2, 0), 2);
}

Test(space_positive_number, single_space, .init = redirect_all_std)
{
    const char *format = " %d";
    int result = space_positive_number(format, 0);
    cr_assert_eq(result, 1);
    cr_assert_stdout_eq_str(" ");
}

Test(space_positive_number, multiple_spaces, .init = redirect_all_std)
{
    const char *format = "   %d";
    int result = space_positive_number(format, 0);
    cr_assert_eq(result, 3);
    cr_assert_stdout_eq_str("   ");
}

Test(space_positive_number, no_space, .init = redirect_all_std)
{
    const char *format = "%d";
    int result = space_positive_number(format, 0);
    cr_assert_eq(result, 0);
    cr_assert_stdout_eq_str("");
}

Test(space_positive_number, space_in_middle, .init = redirect_all_std)
{
    const char *format = "%d %d";
    int result = space_positive_number(format, 2);
    cr_assert_eq(result, 3);
    cr_assert_stdout_eq_str(" ");
}

Test(percent_e, large_number, .init = redirect_all_std)
{
    format_detection_t format_info = {0, 6, 0, 0, 0, 0, 0, 0, 0};
    int result = percent_e(9.87e+20, 0, 6, format_info);
    cr_assert_eq(result, 12);
    cr_assert_stdout_eq_str("9.870002e+20");
}

Test(percent_o, positive_number, .init = redirect_all_std)
{
    int result = percent_o(12345, 8);
    cr_assert_eq(result, 5);
    cr_assert_stdout_eq_str("30071");
}

Test(percent_o, zero, .init = redirect_all_std)
{
    int result = percent_o(0, 8);
    cr_assert_eq(result, 1);
    cr_assert_stdout_eq_str("0");
}

Test(percent_o, small_number, .init = redirect_all_std)
{
    int result = percent_o(7, 8);
    cr_assert_eq(result, 1);
    cr_assert_stdout_eq_str("7");
}

Test(percent_o, large_number, .init = redirect_all_std)
{
    int result = percent_o(4294967295, 8);
    cr_assert_eq(result, 11);
    cr_assert_stdout_eq_str("37777777777");
}

Test(handle_dot, no_precision, .init = redirect_all_std)
{
    format_detection_t format_info = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    const char *format = "%.d";
    va_list args;
    int result = handle_dot(format, args, 0, format_info);
    va_end(args);
    cr_assert_eq(result, 2);
    cr_assert_eq(format_info.precision, 0);
}
