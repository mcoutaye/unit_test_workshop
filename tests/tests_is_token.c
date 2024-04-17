/*
** EPITECH PROJECT, 2024
** units_tests
** File description:
** unit_tests
*/

#include "tests_includes.h"
#include <stdlib.h>
#include <stddef.h>

Test (is_token, null_s1)
{
    cr_assert_eq(is_token('e', "pierre"), true);
}

Test (is_token, null_s2)
{
    cr_assert_eq(is_token('a', NULL), false);
}

Test (is_token, null_s3)
{
    cr_assert_eq(is_token('a', ""), false);
}

Test (is_token, null_s4)
{
    cr_assert_eq(is_token('z', "jje suis un test plus long"), false);
}
