/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    if (i <= n) {
        dest[n] = src[n];
        my_putchar(n);
        n++;
    }
    return (0);
}
