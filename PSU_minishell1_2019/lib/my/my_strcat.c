/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** to put smth at the end of a line
*/

#include <stddef.h>
#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int count;

    for (count = 0; src[count] != '\0'; count++)
        dest[len + count] = src[count];
    dest[len + count] = '\0';
    return (dest);
}

char *my_strcat_read(char *dest, char src)
{
    int len = my_strlen(dest);

    dest[len] = src;
    dest[len + 1] = '\0';
    return (dest);
}
