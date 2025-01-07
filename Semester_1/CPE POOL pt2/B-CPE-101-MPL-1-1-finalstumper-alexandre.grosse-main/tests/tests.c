/*
** EPITECH PROJECT, 2024
** Coucou les bebous
** File description :
** fortnite enjoyer
*/

#include <criterion/criterion.h>
#include "../rush3.h"
Test(getsqr, coucou) {
    int i = getsqr();
    my_putstro("o-o\n| |\no-o\n");
    cr_assert_eq(i, 84);
}

Test(getsqr, coucou1) {
    my_putstro("/*\\\n* *\n\\*/\n");
    cr_assert_eq(getsqr, 0);
}

Test(getsqr, coucou2) {
    my_putstro("ABA\nB B\nCBC\n");
    cr_assert_eq(getsqr, 0); 
}

Test(getsqr, coucou3) {
    my_putstro("ABC\nB B\nABC\n");
    cr_assert_eq(getsqr, 0); 
}

Test(getsqr, coucou4) {
    my_putstro("ABC\nB B\nCBA\n");
    cr_assert_eq(getsqr, 0);
}
