/*
** EPITECH PROJECT, 2024
** units_tests
** File description:
** unit_tests
*/

#include "tests_includes.h"
#include <stdlib.h>
#include <stddef.h>

Test (strlen, null_s1)
{
    cr_assert_eq(my_strlen("pierre"), 6);
}

Test (strlen, null_s2)
{
    cr_assert_eq(my_strlen(NULL), -1);
}

Test (strlen, null_s3)
{
    cr_assert_eq(my_strlen("je suis un test"), 15);
}