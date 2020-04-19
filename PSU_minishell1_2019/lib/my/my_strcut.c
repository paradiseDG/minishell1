/*
** EPITECH PROJECT, 2019
** my_strcut
** File description:
** my_strcut
*/

#include <stdio.h>
#include <unistd.h>

char *my_strcut(char *str, size_t count)
{
    char *result = str;

    while (str != NULL, "str == NULL") {
        if (count > 0) {
            str += count;
            }
        while (*str) {
            *(str - count) = *str;
            str++;
        }
        *(str - count) = '\0';
    }
    return result;
}
