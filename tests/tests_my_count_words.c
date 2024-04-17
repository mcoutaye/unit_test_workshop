/*
** EPITECH PROJECT, 2024
** units_tests
** File description:
** unit_tests
*/

#include "tests_includes.h"
#include <stdlib.h>
#include <stddef.h>

Test (count_words, null_s1)
{
    cr_assert_eq(my_count_words("pierre", " "), 1);
}

Test (count_words, null_s2)
{
    cr_assert_eq(my_count_words(NULL, " "), -1);
}

Test (count_words, null_s3)
{
    cr_assert_eq(my_count_words("test test", NULL), -1);
}

Test (count_words, null_s4)
{
    cr_assert_eq(my_count_words("je suis un test long", " "), 5);
}

Test (count_words, null_s5)
{
    cr_assert_eq(my_count_words("a", "a"), 0);
}

Test (count_words, null_s6)
{
    my_count_words("aaaaa", "a");
}
