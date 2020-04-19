/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** mystrlen
*/

int my_strlen(char *string)
{
    int count = 0;

    while (string[count] != '\0')
        count++;
    return (count);
}
