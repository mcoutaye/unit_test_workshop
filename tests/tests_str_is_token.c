/*
** EPITECH PROJECT, 2024
** units_tests
** File description:
** unit_tests
*/

#include "tests_includes.h"
#include <stdlib.h>
#include <stddef.h>

Test (str_is_token, null_s1)
{
    cr_assert_eq(str_is_token("e", "pierre"), true);
}

Test (str_is_token, null_s2)
{
    cr_assert_eq(str_is_token("a", NULL), false);
}

Test (str_is_token, null_s3)
{
    cr_assert_eq(str_is_token(NULL, "a"), false);
}

Test (str_is_token, null_s4)
{
    cr_assert_eq(str_is_token("ez", "je suis un long test"), false);
}

// Test (str_is_token, null_s5)
// {
//     char *str = NULL;
//     cr_assert_eq(str_is_token(&str, "a"), false);
// }

// Test (str_is_token, null_s6)
// {
//     char *str = NULL;
//     cr_assert_eq(str_is_token("a", &str), false);
// }
