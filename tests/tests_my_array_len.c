/*
** EPITECH PROJECT, 2024
** units_tests
** File description:
** unit_tests
*/

#include "tests_includes.h"
#include <stdlib.h>
#include <stddef.h>

Test (array_len, null_s1)
{
    char *tab[10] = {"pierre", "oui"};
    cr_assert_eq(my_array_len(tab), 2);
}

Test (array_len, null_s2)
{
    cr_assert_eq(my_array_len(NULL), -1);
}

Test (array_len, null_s3)
{
    char *tab[30] = {"je", "suis", "un", "test", "long"};
    cr_assert_eq(my_array_len(tab), 5);
}
