/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** mystrcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int count_cpy = 0;

    while (src[count_cpy] != '\0') {
        dest[count_cpy] = src[count_cpy];
        count_cpy++;
    }
    dest[count_cpy] = '\0';

    return (dest);
}
