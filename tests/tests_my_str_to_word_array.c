/*
** EPITECH PROJECT, 2024
** units_tests
** File description:
** unit_tests
*/

#include "tests_includes.h"
#include <stdlib.h>
#include <stddef.h>

Test (str_to_word_array, null_s1)
{
    char *tab[3] = {"pierre", "oui", NULL};
    char **tab2 = my_str_to_word_array("pierre oui", " ");
    for (int i = 0; tab[i]; i += 1)
        cr_assert_str_eq(tab2[i], tab[i]);
}

Test (str_to_word_array, null_s2)
{
    cr_assert_eq(my_str_to_word_array(NULL, "a"), NULL);
}

Test (str_to_word_array, null_s3)
{
    cr_assert_eq(my_str_to_word_array("test", NULL), NULL);
}
