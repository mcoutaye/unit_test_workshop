/*
** EPITECH PROJECT, 2024
** units_tests
** File description:
** unit_tests
*/

#include "tests_includes.h"
#include <stdlib.h>
#include <stddef.h>

Test (free, null_s1)
{
    char *str = malloc(sizeof(100));
    my_free(str);
}

Test (free, null_s2)
{
    my_free(NULL);
}