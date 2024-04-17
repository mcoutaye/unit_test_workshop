/*
** EPITECH PROJECT, 2024
** units_tests
** File description:
** unit_tests
*/

#include "tests_includes.h"
#include <stdlib.h>
#include <stddef.h>

Test (strlen_sepa, null_s1)
{
    cr_assert_eq(my_strlen_sepa("pierre", " "), 6);
}

Test (strlen_sepa, null_s2)
{
    cr_assert_eq(my_strlen_sepa(NULL, " "), -1);
}

Test (strlen_sepa, null_s3)
{
    cr_assert_eq(my_strlen_sepa("test test", NULL), -1);
}

Test (strlen_sepa, null_s4)
{
    cr_assert_eq(my_strlen_sepa("je suis un test long", " "), 2);
}
