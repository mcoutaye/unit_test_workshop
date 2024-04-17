/*
** EPITECH PROJECT, 2024
** units_tests
** File description:
** unit_tests
*/

#include "tests_includes.h"
#include <stdlib.h>
#include <stddef.h>

Test (strndup, null_s1)
{
    cr_assert_str_eq(my_strndup("pierre", 3), "pie");
}

Test (strndup, null_s2)
{
    cr_assert_eq(my_strndup(NULL, 1), NULL);
}

Test (strndup, null_s3)
{
    cr_assert_eq(my_strndup("Bonsoir", -1), NULL);
}

Test (strndup, null_s5)
{
    cr_assert_str_eq(my_strndup("je suis un test plus long", 25), "je suis un test plus long");
}



