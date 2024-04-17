/*
** EPITECH PROJECT, 2024
** units_tests
** File description:
** unit_tests
*/

#include "tests_includes.h"
#include <stdlib.h>
#include <stddef.h>

Test (freen_array, null_s1)
{
    char **tab = malloc(sizeof(100));
    freen_array(tab, 2);
}

Test (freen_array, null_s2)
{
    freen_array(NULL, 2);
}

Test (freen_array, null_s3)
{
    char **tab = NULL;
    freen_array(tab, 2);
}

Test (freen_array, null_s4)
{
    char **tab = malloc(sizeof(100));
    freen_array(tab, -1);
}